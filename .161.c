#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

bool rangePerfectSquare(int left, int right, int target) {
    if (left * left > target || left > right)
        return false;
    else if(left * left == target)
        return true;
    return rangePerfectSquare(left + 1, right, target);

}

int main() {
    int a;
    scanf("%d", &a);
    bool ans = rangePerfectSquare(1, INT_MAX, a);
    if (ans) {
        printf("true");
    }
    else {
        printf("false");
    }
    printf("\n");
    return 0;
}