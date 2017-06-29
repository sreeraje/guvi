#include<stdio.h>
#include<conio.h>
int main()
{
int num,re,sum=0,i;
clrscr();
printf("enter the number");
scanf("%d",&num);
for(i=1;i<num;i++)
{
re=num%i;
if(re==0)
{
sum=sum+i;
}
}
if(sum==num)
printf("perfect number");
else
printf("not a perfect number");
getch();
return 0;
}
