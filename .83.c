#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void doom(int month, int day) {
	int monthmonday[13] = { 0, 10, 21,7, 4, 9, 6, 11, 8, 5, 10, 7, 12 };
	int days = monthmonday[month];
	int aday;
	if (day == days)
		aday = 0;
	else if (day > days) {
		aday =day- days;
		aday %= 7;
	}
	else if (day < days) {
		aday = days - day;
		aday %= 7;
		aday = 7 - aday;
	}
	switch (aday) {
	case 0:
		printf("Monday\n"); break;
	case 1:
		printf("Tuesday\n"); break;
	case 2:
		printf("Wednesday\n"); break;
	case 3:
		printf("Thursday\n"); break;
	case 4:
		printf("Friday\n"); break;
	case 5:
		printf("Saturday\n"); break;
	case 6:
		printf("Sunday\n"); break;
	case 7:
		printf("Monday\n"); break;
	}
	return;
}

int main() {
	int n;
	scanf("%d", &n);
	int month, day;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &month, &day);
		doom(month, day);
	}
	return 0;
}
