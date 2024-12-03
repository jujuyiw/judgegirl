#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n;
	scanf("%d", &n);
	int x=1, y=1;
	int direction = 0;
	int dx[6] = { 0,1,0,1,0,-1 };
	int dy[6] = { 1,0,-1,0,1,0 }; //上 右 下 右 上 左
	int round = 1, time = 1, a = 0;
	for (int count = 1;count < n;count++) {

		if (round == 3) {
			x += dx[direction];
			y += dy[direction];
			a++;
		}

		if (round == 2) {
			x += dx[direction];
			y += dy[direction];
			a++;
		}
		if (round == 1) {
			x += dx[direction];
			y += dy[direction];
			direction = (direction + 1) % 6;
			round++;
			
		}
		if (a == time) {
			a = 0;
			direction = (direction + 1) % 6;
			round++;
			if (round == 4) {
				round = 1;
				time++;
			}
		}
		
	}
	printf("%d %d", x, y);
	return 0;
}