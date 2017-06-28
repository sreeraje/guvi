#include<stdio.h>
#include<conio.h>
int main()
{
int a,v,p,q,r;
clrscr();
printf("enter the number");
scanf("%d%d%d",&p,&q,&r);
a=(2*q*p)+(2*p*r)+(2*q*r);
v=p*q*r;
printf("%d%d",a,v);
getch();
return 0;
}
