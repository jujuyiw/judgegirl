#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

int way(int n,int m) {
	if (n == 1 || m == 1)
		return 1;
	else
		return way(n - 1, m) + way(n, m - 1);
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d", way(n, m));
	return 0;
}
