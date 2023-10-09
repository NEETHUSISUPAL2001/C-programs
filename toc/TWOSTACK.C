#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

#define MAX_SIZE 10

struct TwoStacks {
    int array[MAX_SIZE];
    int top1;
    int top2;
};

typedef struct TwoStacks TwoStacks;

void initialize(TwoStacks* stack) {
    stack->top1 = -1;
    stack->top2 = MAX_SIZE;
}

void push(TwoStacks* stack, int element, int stackNumber)
{
clrscr();
    if (stackNumber == 1 && stack->top1 < stack->top2 - 1) {
	stack->top1++;
	stack->array[stack->top1] = element;
    } else if (stackNumber == 2 && stack->top1 < stack->top2 - 1) {
	stack->top2--;
	stack->array[stack->top2] = element;
    }
}

void printStack(TwoStacks* stack, int stackNumber) {
int i;
    if (stackNumber == 1) {
	printf("Elements in Stack 1:\n");
	for (i = 0; i <= stack->top1; i++) {
	    printf("%d ", stack->array[i]);
	}
    } else if (stackNumber == 2) {
	printf("Elements in Stack 2:\n");
	for (i = MAX_SIZE - 1; i >= stack->top2; i--) {
	    printf("%d ", stack->array[i]);
	}
    }
    printf("\n");
}

int main() {
    TwoStacks stack;
    initialize(&stack);

    push(&stack, 1, 1);
    push(&stack, 2, 1);
    push(&stack, 3, 1);
    push(&stack, 4, 1);
    push(&stack, 5, 1);


    push(&stack, 6, 2);
    push(&stack, 7, 2);
    push(&stack, 8, 2);
    push(&stack, 9, 2);



    printStack(&stack, 1);
    printStack(&stack, 2);
		getch();
    return 0;
}


