#include<stdio.h>
#include<conio.h>
int main()
{
int n,c,k;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(c=1;c<=n;c++)
{
for(k=1;k<=c;k++)
printf("#");
printf("\n");
}
getch();
return 0;
}
