#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <assert.h>
#include <stdio.h>

int fibr(int n) {
	if (n == 0 || n == 1)
		return 1;
	return (fibr(n - 1) + fibr(n - 2));
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fibr(n));
	return 0;
}