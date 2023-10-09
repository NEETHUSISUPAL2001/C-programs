

#include<stdio.h>
#include<conio.h>
void fibonacci(int n)
{
int first=0;
int second=1;
int next,i;
clrscr();
printf("enter the %d terms : %d ",n,first,second);
for(i=2;i<n;i++)
{
next=first+second;
printf("%d ",next);
first=second;
second=next;
}
printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    getch();
    return 0;
}