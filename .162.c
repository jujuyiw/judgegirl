#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(int* a, int l, int r, int n) {
    if (l == n) {
        for (int i = 0;i < n;i++)
            printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for (int j = l;j < n;j++) {
        swap(&a[l], &a[j]);
        permute(a, l + 1, r, n);
        swap(&a[l], &a[j]);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    permute(a, 0, n - 1, n);
    free(a);
    return 0;
}