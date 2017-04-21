#include<stdio.h>
#include<string.h>
int main()
{
int num;
int *rev;
printf("enter the number");
scanf("%d",num);
rev=numrev(num);
printf("the number is",rev);
return 0;
}
