#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void len(char* arr)
{
    int a = strlen(arr);
    printf("%d", a);
    return;
}

int main()
{
    char arr[60];
    scanf("%s", arr);
    len(arr);
}