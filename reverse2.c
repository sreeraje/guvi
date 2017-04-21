#include<stdio.h>
#include<string.h>
int main()
{
char s[50],*rev;
printf("enter the string");
scanf("%s",s);
rev=srev(s);
printf("reverse string",rev);
return 0;
}
