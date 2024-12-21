#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

/*oddEvenList是函數名，
struct ListNode表示這個函數會返回指向struct ListNode結構體的指標
參數：函數接受一個參數head，他是指向struct ListNode結構體的指標*/
struct ListNode* oddEvenList(struct ListNode* head) 
{
    if (head == NULL||head->next==NULL)
        return head;
    struct ListNode* odd = head;
    struct ListNode* even = head->next;
    struct ListNode* evenhead = even;

    while (even != NULL && even->next != NULL) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenhead; 
    return head;
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
        struct ListNode* ans = oddEvenList(head);
        struct ListNode* ptr;

        ptr = ans;

        while (ptr != NULL)
        {
            printf("%d ", ptr->val);
            ptr = ptr->next;
        }
        printf("\n");
    }
}