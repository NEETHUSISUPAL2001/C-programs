
#include<stdio.h>
void main()

{
int a[100],num,i,j,temp;
clrscr();
printf("enter the nums:");
scanf("%d",&num);
printf("ente the array ele:");
for(i=0;i<num;i++)
scanf("%d",&a[i]);
for(i=0;i<num-1;i++)
{
for(j=0;j<num-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("orderd lst in asc order");
for(i=0;i<num;i++)
printf("%d\t",a[i]);
printf("\n");
getch();
}