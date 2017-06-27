#include<stdio.h>
#include<conio.h>
int main()
{
int i,c=1;
char a[50];
clrscr();
printf("enter the string");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='')
{
c=c+1;
}
}
printf("count is %d",c);
}
getch();
return 0;
}
