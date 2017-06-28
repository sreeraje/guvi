#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
if(n>=1 && n<=9)
{
printf("the number is in the range %d",n);
}
else
{
printf("the nimber is not in the range %d",n);
}
getch();
return 0;
}
