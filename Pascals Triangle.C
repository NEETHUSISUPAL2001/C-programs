#include<stdio.h>
#include<conio.h>
void main()
{
int tri[5][5];
int i,j;
clrscr();
for(i=0;i<5;i++)
{
tri[0][i]=1;
}
for(i=1;i<5;i++)
{
for(j=0;j<i;j++)
{
if(j==0||j==i)
{
tri[i][j]=1;
}
else
{
tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
}}}
for(i=0;i<5;i++)
{
for(j=0;j<=i;j++)
{
printf("%d",tri[i][j]);
}
printf("\n");
}
getch();
}
