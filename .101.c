#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getFib(int N) {
    int fab[1000] = { 0 };
    fab[0] = 0;
    fab[1] = 1;
    for (int i = 2;i < N;i++)
        fab[i] = fab[i - 1] + fab[i - 2];
    for (int j = 0;j < N;j++) {
        if (j == 0)
            printf("%d", fab[j]);
        else
            printf(" %d", fab[j]);
    }
    return;
}

int main() {
    int N;
    scanf("%d", &N);
    getFib(N);

    return 0;
}