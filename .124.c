#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int D_size(int S, int D) {
    int currentday = 1;
    int currentsize = S;
    int leaveday=currentsize;
    while (currentday <= D) {
        if (currentday <= D && D <= leaveday)
            return currentsize;
        currentday = leaveday +1;
        currentsize++;
        leaveday += currentsize;
    }
}
   

int main() {
    int S, D;
    scanf("%d %d", &S, &D);
    printf("%d", D_size(S, D));
    return 0;
}