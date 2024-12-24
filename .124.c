#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int D_size(int S, int D) {
    while (1) {
        D -= S;
        if (D <= 0)
            break;
        S++;
    }
    return S;
}

int main() {
    int S, D;
    scanf("%d %d", &S, &D);
    printf("%d", D_size(S, D));
    return 0;
}