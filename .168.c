#define _CRT_SECURE_NO_WARNINGS
#define M 100
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

int moneyPerm(int K) {
    if (K == 0) 
        return 1;
    
    if (K < 0) 
        return 0;
    
    return moneyPerm(K - 10) + moneyPerm(K - 5) + moneyPerm(K - 1);
}

int main() {
	int money;
	scanf("%d", &money);
	printf("%d", moneyPerm(money));
	return 0;
}