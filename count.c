#include<stdio.h>
int main()
{
l n;
int c=0;
printf("enter the integer:");
scanf("%lld",&n);
while(n!=0)
{
n/=10;
++c;
}
printf("number of digits :%d",c);
}
