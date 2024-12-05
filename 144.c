#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

int getDecimalValue(struct ListNode* head)
{
    int sum=0;
    while (head->next != NULL) {
        sum = (sum + head->val) * 2;
        head=head->next;
    }
    sum += head->val;
    return sum;
}

void Construct(struct ListNode* node, int length, int num)
{
    int a;
    scanf("%d", &a);
    node->val = a;

    if (num >= length)
    {
        node->next = NULL;
        return;
    }
    node->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    num++;
    Construct(node->next, length, num);
}

int main()
{
    struct ListNode* head;
    int n, a, length;
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &length);
        Construct(head, length, 1);
        int ans = getDecimalValue(head);
        printf("%d\n", ans);
    }
}