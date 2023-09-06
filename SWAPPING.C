#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*ptr1,*ptr2;
clrscr();
printf("entr the num:");
scanf("%d",&a);
printf("enter the num:");
scanf("%d",&b);
printf("before swap\n");
printf("a=%d,b=%d",a,b);
ptr1=&b;
ptr2=&a;
printf("after swappimg:\n");
printf("a=%d,b=%d",*ptr1,*ptr2);
getch();
}