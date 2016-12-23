#include<stdio.h>
int main()
{
char s1[2],s2[2];
int i,t= 0;
 printf("Enter the s1 value: ");
scanf("%c",&s1);
 printf(" Enter the S2 value: ");
scanf("%c",&s2);
 for(i=0; s1[i]!=0;i++)
{
if(s1[i] == s2[i])
{
printf("Both strings are same.");
 else
 printf("Both string not same.");
 return 0;
 }  
