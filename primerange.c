#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,f,i,j;
clrscr();
printf("enter the numbers");
scanf("%d%d",&n1,&n2);
printf("prime numbers are in range %d and %d",n1 and n2);
for(i=n1+1;i<n2;i++)
{
for(j=1;j<i/2;j++)
{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
printf("%d",i);
}
getch();
return 0;
}
