#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i,flag,len;
   flag=0;
   clrscr();
   printf("enter strng:");
   gets(str);
   len=strlen(str);
   for(i=0;i<len;i++)
   {
   if(str[i]!=str[len-i-1])

   {
   flag=1;
   break;
   }
   }
   if(flag==0)
   {
   printf("is a palim");
   }
   else
   {
   printf("not a palim");
   }
   getch();
   }