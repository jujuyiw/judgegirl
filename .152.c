#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct matrix {
    int row, col;
    int* data;
} *MATRIX;

int main() {
    
    MATRIX a = (MATRIX)malloc(sizeof(struct matrix));
    scanf("%d%d", &a->row, &a->col);
    a->data = (int*)malloc(a->row * a->col * sizeof(int));
    for (int i = 0;i < a->row;i++)
        for (int j = 0;j < a->col;j++)
            scanf("%d", &a->data[i*a->col+j]);

    MATRIX b = (MATRIX)malloc(sizeof(struct matrix));
    scanf("%d%d", &b->row, &b->col);
    b->data = (int*)malloc(b->row * b->col * sizeof(int));
    for (int i = 0;i < b->row;i++)
        for (int j = 0;j < b->col;j++)
            scanf("%d", &b->data[i * b->col + j]);


    if (a->row != b->row || a->col != b->col)
        printf("不可相加");
    else {
        for (int i = 0;i < a->row;i++) {
            for (int j = 0;j < a->col;j++) {
                if (j == 0)
                    printf("%d", a->data[i * a->col + j] + b->data[i * b->col + j]);
                else
                    printf(" %d", a->data[i * a->col + j] + b->data[i * b->col + j]);
            }
            printf("\n");
        }
    }

    free(a->data);
    free(a);
    free(b->data);
    free(b);
    return 0;
}