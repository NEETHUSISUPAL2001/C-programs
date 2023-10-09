#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct ListNode {
    int value;
    struct ListNode* next;
};

typedef struct ListNode ListNode;

ListNode* addNode(ListNode* head, int val) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->value = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        ListNode* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }

    return head;
}

void displayList(ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->value);
        head = head->next;
    }
    printf("null\n");
}

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* current = head;
    ListNode* nextNode = NULL;

    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

int main() {
    ListNode* head = NULL;

    head = addNode(head, 1);
    head = addNode(head, 2);
    head = addNode(head, 3);
    head = addNode(head, 4);
    head = addNode(head, 5);
    head = addNode(head, 6);

    printf("Original List:\n");
    displayList(head);

    head = reverseList(head);

    printf("Reversed List:\n");
    displayList(head);

    getch();
    return 0;
}