#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d * %d=%d\n",n,i,n*i);
}
getch();
return 0;
}
