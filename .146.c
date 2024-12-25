#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

typedef struct pair {
    int frequency;
    char charASCII;
} pair;

void print(pair* myData)
{
    int i;
    for (i = 0; i < 95; i++)
        (myData[i].frequency == 0) ? printf("") : printf("%d %d\n", myData[i].charASCII, myData[i].frequency);
}

int main()
{
    struct pair* myData = (struct pair*)malloc(95 * sizeof(struct pair));
    int i, len, flag = 0;
    char str[9999];

    while (gets(str) != NULL) {
        if (flag != 0) printf("\n");
        flag++;
        //初始化 mydata 的頻率為0，並設置ASCII值
        for (int i = 0;i < 95;i++) {
            myData[i].frequency = 0;
            myData[i].charASCII = i + 32; //ASCII 32~126
        }
        //統計字元頻率
        len = strlen(str); //strlen是計算字串長度的函數
        for (int i = 0;i < len;i++)
            if (str[i] >= 32 && str[i] <= 126)
                myData[str[i] - 32].frequency++;
        //排序
        for (int i =0;i<94;i++)
            for (int j=i+1;j<95;j++)
                if (myData[i].frequency > myData[j].frequency || (myData[i].frequency == myData[j].frequency && myData[i].charASCII < myData[j].charASCII)) {
                    pair temp = myData[j];
                    myData[j] = myData[i];
                    myData[i] = temp;
                }
         print(myData);
    }
    free(myData);
    return 0;
}