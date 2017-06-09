#include<stdio.h>
#include<conio.h>
void main()
{
int *p1,*p2;
int n;
clrscr();
printf("Enter two number");
scanf("%d%d",p1,p2);
n=*p1+*p2;
printf("sum=%d",n);
getch();
}
