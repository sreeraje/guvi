#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
if(n>=0 && n<=999)
{
printf("valid input");
}
else
{
printf("invalid input");
}
getch();
return 0;
}
