#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void check(int** image, int imageSize, int sr, int sc, int newColor,int origin) {
    if (sr >= imageSize || sr < 0 || sc >= imageSize || sc < 0)
        return;
    if (image[sr][sc] != origin)
        return;
    image[sr][sc] = newColor;

    check(image, imageSize, sr + 1, sc, newColor, origin);
    check(image, imageSize, sr - 1, sc, newColor, origin);
    check(image, imageSize, sr, sc + 1, newColor, origin);
    check(image, imageSize, sr, sc - 1, newColor, origin);
    return;
}

void floodFill(int** image, int imageSize, int sr, int sc, int newColor) {
    int origin = image[sr][sc];
    if (origin == newColor)
        return;
    check(image, imageSize, sr, sc, newColor, origin);
}

int main() {
    int n;
    int sr, sc, newColor;
    scanf("%d", &n);
    int** p = NULL;
    p = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        p[i] = (int*)malloc(sizeof(int) * n);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int tmp;
            scanf("%d", &tmp);
            p[i][j] = tmp;
        }
    }
    scanf("%d", &sr);
    scanf("%d", &sc);
    scanf("%d", &newColor);
    int targent = p[sr][sc];
    floodFill(p, n, sr, sc, newColor);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);
    return 0;
}