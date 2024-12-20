#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int lcs(int* text1, int* text2, int m, int n) {

    if (m == 0||n==0) {
        return 0;
    }
    for(int i=m;i>0;i--)
        for(int j=n;j>0;j--)
            if (text1[i] == text2[j]) {
                return 1+lcs (text1, text2, i-1 , j-1);
            }
}

void int_to_array(int* array1, int value, int index) {
    while (value != 0) {
        array1[index] = value % 10;
        index--;
        value /= 10;
    }
    return;
}

int main() {
    int ans = 0;
    int text1[100] = { 0 };
    int text2[100] = { 0 };
    int t1, t2, m, n;

    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &t1);
    scanf("%d", &t2);

    int check = 0;
    int_to_array(text1, t1, m);
    int_to_array(text2, t2, n);
    ans = lcs(text1, text2, m, n);
    printf("%d", ans);
    return 0;
}
