#define _CRT_SECURE_NO_WARNINGS
#define M 100
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

int a[M][M];

int way(int n, int m,int rows,int cols) {
	if (n==0&&m==cols-1)
		return 1;
	if (n<0 || m<0 || n>=rows || m>=cols || a[n][m] == 0)
		return 0;
	return way(n - 1, m, rows, cols) + way(n, m + 1, rows, cols);
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0;i < n;i++)
		for (int j = 0;j < m;j++)
			scanf("%d", &a[i][j]);
	printf("%d", way(n-1, 0,n,m));
	return 0;
}