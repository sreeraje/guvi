#include<stdio.h>
#include<conio.h>
int main()
{
int n,c,k;
clrscr();
scanf("%d",&n);
for(c=1;c<=n;c++)
{
for(k=1;k<=n;k++)
printf("*");
printf("\n");
}
getch();
return 0;
}
