#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],b[5][5],r,c,i,j,k,mul[5][5];
clrscr();
printf("entr the num of row");
scanf("%d",&r);
printf("entr the num of col");
scanf("%d",&c);
printf("entr the frst matrx ele:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("entr the scnd matrix ele:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}}
printf("multiply of the matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
    }
getch();}