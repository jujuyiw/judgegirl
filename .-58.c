#define _CRT_SECURE_NO_WARNINGS
#define M 400
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>


int data[M][M],visit[M][M];

int check(int start, int end, int rows, int cols) {
	if (start < 0 || end < 0 || start >= rows || end >= cols || data[start][end] == 0 || visit[start][end] == 1) 
		return 0;
	visit[start][end] = 1;

	return 1 + check(start + 1, end, rows, cols) + check(start - 1, end, rows, cols) + check(start, end + 1, rows, cols) + check(start, end - 1, rows, cols);
}

int compare(const void* x, const void* y) {
	return(*(int*)y - *(int*)x);
}

void lake(int rows, int cols) {
	int* a = (int*)malloc((rows * cols / 2 + 1) * sizeof(int));
	int count = 0;
	
	for(int i=0;i<rows;i++)
		for(int j=0;j<cols;j++)
			if (data[i][j] == 1 && visit[i][j] == 0) {
				a[count] = check(i, j, rows, cols);
				count++;
			}
	qsort(a, count, sizeof(int), compare);
	
	for (int i = 0;i < count;i++)
		printf("%d\n", a[i]);

	free(a);
}

int main() {
	int rows, cols;
	scanf("%d%d", &rows, &cols);
	for (int i = 0;i < rows;i++)
		for (int j = 0;j < cols;j++)
			scanf("%d", &data[i][j]);

	lake(rows, cols);
	return 0;
}