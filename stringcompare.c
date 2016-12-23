#include<stdio.h>
int main()
{
int main(){
char s1[50],s2[50];
    int c;
printf("Enter first string: ");
 scanf("%s",s1);
printf("Enter second string: ");
    scanf("%s",s2);

    c = stringCompare(str1,str2);

    if(c == 1)
         printf("Both strings are equal.");
    else
         printf("Both strings are not equal");
 
    return 0;
}

