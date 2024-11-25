#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void ID_Check(char ID[]) {
    int letter;
    switch (ID[0]) {
    case 'A': letter = 10; break; case 'B': letter = 11; break; case 'C': letter = 12; break;
    case 'D': letter = 13; break; case 'E': letter = 14; break; case 'F': letter = 15; break;
    case 'G': letter = 16; break; case 'H': letter = 17; break; case 'I': letter = 34; break;
    case 'J': letter = 18; break; case 'K': letter = 19; break; case 'L': letter = 20; break;
    case 'M': letter = 21; break; case 'N': letter = 22; break; case 'O': letter = 35; break;
    case 'P': letter = 23; break; case 'Q': letter = 24; break; case 'R': letter = 25; break;
    case 'S': letter = 26; break; case 'T': letter = 27; break; case 'U': letter = 28; break;
    case 'V': letter = 29; break; case 'W': letter = 32; break; case 'X': letter = 30; break;
    case 'Y': letter = 31; break; case 'Z': letter = 33; break;
    }
    letter = (letter % 10) * 9 + letter / 10;
    int sum = 0,j = 8;
    for (int i = 1;i < 9;i++) {
        int number = ID[i] - 48;
        sum += number * j;
        j--;
    }
    int last = ID[9] - 48;
    sum += letter + last;
    if (sum % 10 == 0)
        printf("real");
    else
        printf("fake");
    return;
}

int main() {
    char ID[100];
    while (scanf("%s", ID) != EOF) {
        ID_Check(ID);
    }
    return 0;
}