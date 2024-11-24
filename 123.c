#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bin(int N) {
    int count = 0;
    while (N != 0) {
        if (N % 2 == 1)
            count++;
        N /= 2;
    }
    return count;
}

int hex(int N) {
    int time = 0;
    while (N != 0) {
        int a = N % 10;
        while (a != 0) {
            if (a % 2 == 1)
                time++;
            a /= 2;
        }
        N /= 10;
    }
    return time;
}

int main() {
    int N, b1, b2;
    scanf("%d", &N);
    b1 = bin(N);
    b2 = hex(N);
    printf("%d %d", b1, b2);
    return 0;
}