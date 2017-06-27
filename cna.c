#include<stdio.h>
#include<conio.h>
int main()
{
char a[100];
int cd,ca,cs,b;
int c;
clrscr();
cd=ca=0;
printf("enter the string");
scanf("%s",a);
for(c=0;a[c]!=NULL;c++)
{
if(a[c]>='0' && a[c]<='9')
cd++;
else if((a[c]>='A' && a[c]<='Z')||(a[c]>='a' && a[c]<='z');
ca++;
}
b=ca+cd;
printf("\nDigits: %d \nAlphbets: %d \nAlpha: %d",cd,ca,b);
getch();
return 0;
}
