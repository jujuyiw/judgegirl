#define _CRT_SECURE_NO_WARNINGS
#define M 100
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>


void swap (int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

void per(int* a, int start,int end) {
	if (start==end) {
		for (int i = 0;i <= end;i++) {
			if (i == 0)
				printf("%d", a[i]);
			else
				printf(" %d", a[i]);
		}
		printf("\n");
		return;
	}

	for (int j = start;j <= end;j++) {
		swap(&a[start], &a[j]);
		per(a, start + 1, end);
		qsort(&a[start + 1], end - start, sizeof(int), compare);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	
	int a[M];
	for (int i = 0;i < n; i++)
		scanf("%d", &a[i]);

	qsort(&a, n, sizeof(int), compare);
	per(a, 0, n-1);
}