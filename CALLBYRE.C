#include<stdio.h>
#include<conio.h>
void swap(int *,int*);
int main()
{
int a=5,b=6;
clrscr();
printf("before swap a=%d,b=%d",a,b);
swap(&a,&b);
return 0;
}
void swap(int *m,int *n)
{
int temp;
temp=*m;
*m=*n;
*n=temp;
printf("after swap a=%d,b=%d",*m,*n);
getch();
}