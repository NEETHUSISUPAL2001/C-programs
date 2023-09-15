#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char str[100],temp;
int len,i,j;
clrscr();
printf("entr the string:");
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{
for(j=0;j<len-i-1;j++)
{
if(str[j]>str[j+1])
{
temp=str[j];
str[j]=str[j+1];
str[j+1]=temp;
}
}
}
printf("string in alphabetic order %s",str);
getch();
}