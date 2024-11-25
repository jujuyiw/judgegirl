#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int data[]) {
    for (int i = 0;i < 4;i++) {
        for (int j = 0;j < 4 - i;j++)
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
    }
    for (int k = 0;k < 5;k++) {
        if (k == 4)
            printf("%d", data[k]);
        else
            printf("%d ", data[k]);
    }
    return;
}

int main() {
    int data[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &data[i]);

    bubble_sort(data);

    return 0;
}