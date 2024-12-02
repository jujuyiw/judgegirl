#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void floodFill(int** image, int imageSize, int sr, int sc, int newColor,int origin) {
    
    if (sr+1  < imageSize)
        if (image[sr+1][sc] ==origin ) {
            image[sr+1][sc] = -1;
            floodFill(image, imageSize, sr+1 , sc, newColor,origin);
        }
    if (sr - 1 >= 0)
        if (image[sr - 1][sc] == origin) {
            image[sr - 1][sc] = -1;
            floodFill(image, imageSize, sr -1, sc, newColor,origin);
        }
    if (sc +1 < imageSize)
        if (image[sr][sc+1] == origin) {
            image[sr][sc+1] = -1;
            floodFill(image, imageSize, sr , sc+1, newColor,origin);
        }
    if (sc - 1 >= 0)
        if (image[sr][sc - 1] == origin) {
            image[sr][sc - 1] = -1;
            floodFill(image, imageSize, sr, sc-1, newColor,origin);
        }
    for (int i = 0;i < imageSize;i++)
        for (int j = 0;j < imageSize;j++)
            if (image[i][j] == -1)
                image[i][j] = newColor;
    
    return;
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
    int origin = p[sr][sc];
    p[sr][sc] = -1;
    floodFill(p, n, sr, sc, newColor,origin);

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