#include<stdio.h>
int main()
{
  int a,b,l,i=1;
  printf("Enter the first card picked up by Patrick:\n");
  scanf("%d",&a);
  printf("Enter the second card picked up by Patrick:\n");
  scanf("%d",&b);
  l=a*i;
  while(l%b!=0)
  {
   i++;
    l=a*i;
  }
 printf("Patrick must choose next card with the number %d",l);
  
return 0;
}
