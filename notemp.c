#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("enter the number");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nafter swapping %d%d",a,b);
getch();
return 0;
}
