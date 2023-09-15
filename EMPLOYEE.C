#include<stdio.h>
#include<conio.h>
struct emp
{
char name[50];
int hra,da,bp,salary,id;
};
void main()
{
struct emp em;
int i,n;
clrscr();
printf("entr the name:\n");
scanf("%s",em.name);
printf("emp id:\n");
scanf("%d",&em.id);
printf("entr the basic pay:\n");
scanf("%d",&em.bp);
em.da=(0.35/100*em.bp);
em.hra=(0.03*em.bp);
em.salary=em.da+em.hra+em.bp;
printf("----------");
printf("salary deatils:\n");
printf("name %s\n",em.name);
printf("employee id %d\n",em.id);
printf("total salary %d\n",em.salary);
getch();
}
