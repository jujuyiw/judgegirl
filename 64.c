#define _CRT_SECURE_NO_WARNINGS
#define M 100
#include <stdio.h>

void open(int m, int a[]) {
	int max = a[0] - a[1];
	for(int i=0;i<m-1;i++)
		for (int j = i + 1; j < m; j++) {
			int k = a[i] - a[j];
			if (k > max)
				max = k;
		}
	printf("%d\n", max);
	return;
}

int main() {
	int n, m, a[M];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		for (int j = 0; j < m; j++)
			scanf("%d", &a[j]);
		open(m, a);
	}
}
