#include<stdio.h>
int main()
{
  char a;
  scanf("%c",&a);
  if(a>=65&&a<=90)
  {
    printf("upper case");
  }
  else if(a>=97&&a<=122)
  {
    printf("lower case");
  }
  else if(a>=48&&a<=57)
  {
    printf("digit");
  }
  else
  {
    printf("damaged");
  }
  return 0;
}
