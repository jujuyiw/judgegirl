#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int* iptr, int n) {
    iptr -= n;
    int max = *iptr;
    for (int i = 0;i < n;i++, iptr++)
        if (*iptr > max)
            max = *iptr;
    return max;
}

int main() {
    int n, i;
    int array[100];
    int* iptr;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &(array[i]));
        iptr = &(array[i]);
        iptr++;
    }
    printf("%d\n", max(iptr, n));
    return 0; 
}