#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*ptr1,*ptr2;
clrscr();
printf("enter frst value:");
scanf("%d",&a);
printf("entr the second value:");
scanf("%d",&b);
printf("before swap \n");
printf("a=%d,b=%d",a,b);
ptr1=&b;
ptr2=&a;
printf("after swap \n");
printf("a=%d,b=%d \n",*ptr1,*ptr2);
getch();
}