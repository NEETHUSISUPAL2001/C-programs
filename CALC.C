#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int i,choice=4,n1,n2,sum,diff,multi,div;
char op;
clrscr();
printf("enter the frst value:");
scanf("%d",&n1);
printf("entr the scnd num");
scanf("%d",&n2);
printf("\n1.sum\n2.diff\n3.multi\n4.div");

for(i=0;i<choice;i++)
{
printf("\nentr the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: sum=n1+n2;
printf("sum is=%d",sum);
break;
case 2:diff=n1-n2;
printf("diff is=%d",diff);
break;
case 3:multi=n1*n2;
printf("multi is=%d",multi);
break;
case 4:div=n1/n2;
printf("div is =%d",div);
break;
default:printf("invalid stmt");
break;
}}
getch();
}