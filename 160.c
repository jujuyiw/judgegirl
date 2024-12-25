#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int GCD(int t, int v) {
    if (t % v == 0)
        return v;
    else {
        int k = t % v;
        t = v;
        v = k;
        return GCD(t, v);
    }
}


int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    int temp;

    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d\n", GCD(a, b));
    return 0;
}