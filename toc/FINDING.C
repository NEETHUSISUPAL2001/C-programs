#include <stdio.h>
#include<conio.h>
struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

void add(Node** list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = *list;
    *list = newNode;
}

void print(Node* list) {
    while (list != NULL) {
	printf("%d ", list->data);
	list = list->next;
    }
    printf("null\n");
}

int find(Node* list, int target) {
    int position = 1;

    while (list != NULL) {
	if (list->data == target) {
	    return position;
	}
	list = list->next;
	position++;
    }

    return -1; // Return -1 if not found
}

int main() {
int target,position;
    Node* myList = NULL;

    add(&myList, 5);
    add(&myList, 4);
    add(&myList, 3);
    add(&myList, 2);
    add(&myList, 1);

    printf("List: ");
    print(myList);
    target=13;
    position = find(myList, target);

    if (position != -1) {
	printf("%d found at position %d\n", target, position);
    } else {
	printf("%d was not found in the list\n", target);
    }
getch();
    return 0;
}
