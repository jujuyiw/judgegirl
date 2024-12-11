#define _CRT_SECURE_NO_WARNINGS
#define M 100
#include <stdbool.h>
#include <assert.h>
#include <stdio.h>

void hnr(int n, char A, char B, char C) {  //start buffer end
	if (n == 1)
		printf("盤子從%c移到%c\n", A, C);
	else{ 
		hnr(n - 1, A,C,B); //start buffer end
		printf("盤子從%c移到%c\n",A,C);
		hnr(n - 1, B,A,C);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	hnr(n, 'A', 'B', 'C');
	return 0;
}