#include<stdio.h>
#include<conio.h>
int main()
{
int n,n1,r,a=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n!=0)
{
r=n1%10;
a=a+r*r*r;
n1=n1/10;
}
if(a==n)
printf("the given number %d is armstrong",n);
else
printf("the given number %d is not armstrong",n);
getch();
return 0;
}
