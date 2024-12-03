#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int extractMax(int* stone, int stoneSize) {
    int max = stone[stoneSize - 1];
    return max;
}

void insert(int* stone, int stoneSize, int value) {
    int imax = stone[stoneSize-2];
    if (imax == value)
        stone[stoneSize - 2] = 0;
    else if(imax!=value){
        stone[stoneSize - 2] = value - imax;
    }
    return;
}

int lastStoneWeight(int* stones, int stonesSize) {
    for (int i = stonesSize - 1;i > 0;i--)
        for (int j = 0;j < i;j++)
            if (stones[j] > stones[j + 1]) {
                int temp = stones[j];
                stones[j] = stones[j + 1];
                stones[j + 1] = temp;
            }
    while (stonesSize > 1) {
        int max = extractMax(stones, stonesSize);
        insert(stones, stonesSize, max);
        if (stones[stonesSize - 2] == 0)
            stonesSize -= 2;
        else
            stonesSize--;
        for (int i = stonesSize - 1;i > 0;i--)
            for (int j = 0;j < i;j++)
                if (stones[j] > stones[j + 1]) {
                    int temp = stones[j];
                    stones[j] = stones[j + 1];
                    stones[j + 1] = temp;
                }
    }
    return stones[0];
}

int main() {
    int n = 0;
    int ans;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    ans = lastStoneWeight(a, n);
    printf("%d", ans);
    free(a);
    return 0;
}