#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int main()
{
  struct node*temp=0,*head=0,*newnode=0;

    for (int i = 0; i < 5; i++)
    {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
          temp=newnode;
          head=newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}