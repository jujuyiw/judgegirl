#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bottle(int empty, int get, int change) {
	int bottle = 0;
	empty += get;
	while (empty >= change) {
		bottle += empty / change;
		empty = empty / change + empty % change;
	}
	return bottle;
}

int main() {
	int n,empty,get,change;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d%d%d", &empty, &get, &change);
		int b = bottle(empty, get, change);
		printf("%d\n", b);
	}
	return 0;
}