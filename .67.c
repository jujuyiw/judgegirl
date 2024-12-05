#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void place(int border1, int border2, int x, int y) {
	if (x == border1 || y == border2)
		printf("divisa\n");
	else if (x > border1) {
		if (y > border2)
			printf("NE\n");
		else
			printf("SE\n");
	}
	else if (x < border1) {
		if (y > border2)
			printf("NO\n");
		else
			printf("SO\n");
	}
	return;
}

int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == 0) break;
		int border1, border2;
		scanf("%d%d", &border1, &border2);
		int x, y;
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &x, &y);
			place(border1, border2, x, y);
		}
	}
}
