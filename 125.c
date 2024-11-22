#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Jolly_Jumpers(int Array[], int size) {
    int absolute[100] = { 0 };
    int jolly = 1; //is jolly
    for (int i = 0;i < size - 1;i++) {
        int number = Array[i] - Array[i + 1];
        if (number < 0)
            number = -number;
        absolute[number] = 1;
    }
    for (int j = 1;j < size;j++) {
        if (absolute[j] == 0)
            jolly = 0; //is not jolly
    }
    if (jolly == 0)
        printf("Not jolly");
    else
        printf("Jolly");
    return;
}

int main() {
    int size;
    scanf("%d", &size);
    int Array[100], i;
    for (i = 0;i < size;i++)
        scanf("%d", &Array[i]);
    Jolly_Jumpers(Array, size);
    return 0;
}