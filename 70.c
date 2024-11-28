#define _CRT_SECURE_NO_WARNINGS
#define M 100
#include <stdio.h>

void bubble(int number, int p[]) {
	for(int i=number-1;i>0;i--)
		for (int j = 0;j < i;j++) 
			if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
	return;
}

int distance(int number,int p[]) {
	int mini = 2 * (p[number - 1] - p[0]);
	for (int i = 1;i < number - 1;i++) {
		int d = 2 * (p[number - 1] - p[i]) + 2 * (p[i] - p[0]);
		if (d < mini)
			mini = d;
	}
	return mini;
}

int main() {
	int n,m,p[M];
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &m);
		for (int j = 0;j < m;j++)
			scanf("%d", &p[j]);
		bubble(m, p);
		int d = distance(m, p);
		printf("%d\n", d);
	}
	return 0;
}