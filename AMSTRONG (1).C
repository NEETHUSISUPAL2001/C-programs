#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,sum=0,temp;
clrscr();
printf("entr a 3 digit num:\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(sum==temp)
printf("%d is an amstrong\n",temp);
else
printf("%d is not an amstrong num",temp);
getch();
}