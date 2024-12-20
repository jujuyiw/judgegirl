#define _CRT_SECURE_NO_WARNINGS
#define M 100
#include <stdio.h>


int square(int n,int sum) {
	sum += n * n;
	if (n == 1) {
		return sum;
	}
	square(n - 1, sum);
}

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	printf("%d", square(n,sum));
	return 0;
}
