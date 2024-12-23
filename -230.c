#define _CRT_SECURE_NO_WARNINGS
#define M 100
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

int weight[M], value[M];

int largest(int thing,int limit) {
	if (thing==0||limit==0)
		return 0;
	if (weight[thing-1] > limit)
		return largest(thing - 1, limit);
	
	int include = value[thing - 1] + largest(thing-1, limit-weight[thing-1]);
	int exclude = largest(thing - 1, limit);

	return include > exclude ? include : exclude;
	
}

int main() {
	int thing, limit;
	scanf("%d%d", &thing, &limit);
	for (int i = 0;i < thing;i++)
		scanf("%d%d", &weight[i], &value[i]);
	printf("%d",largest(thing,limit) );
	return 0;
}