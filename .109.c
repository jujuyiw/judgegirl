#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lcm(int a, int b) {
    int c = a,d=b;
    while (b % a != 0) {
        int k = b % a;
        b = a;
        a = k;
    }
    return (c * d / a);
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int result = lcm(m, n);
    printf("%d", result);
    return 0;
}