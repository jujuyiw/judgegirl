#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void _A_B_C(int num1, int num2) {
    int a[4] = { 0 },b[4] = { 0 };
    int counta = 0, countb = 0,countc;
    int defined = 0;
    for (int i = 0;i < 4;i++) {
        a[i] = num1 % 10;
        b[i] = num2 % 10;
        num1 /= 10;
        num2 /= 10;
    }
    for (int i = 0;i < 4;i++)
        if (b[i] == a[i])
            counta++;
    for (int i = 0;i < 4;i++)
        for (int j = 0;j < 4;j++) 
            if (b[i] == a[j] && i != j)
                countb++;
    printf("%dA%dB%dC", counta, countb,2*(4-counta-countb));
    return;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    _A_B_C(num1, num2);

    return 0;
}