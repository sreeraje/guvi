#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100];
int i,vo=0;
clrscr();
printf("enter the sentence");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') || (a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' ||a[i]=='U'))
{
vo=vo+1;
}
printf("no of vowels in %s=%d\n",a,vo);
getch();
return 0;
}
