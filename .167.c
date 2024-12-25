#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int f(int n) {
    if (n / 10 == 0)
        return n;
    else
        return f(f(n / 10) + n % 10);
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;

}