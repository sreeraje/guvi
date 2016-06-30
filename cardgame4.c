#include<stdio.h>
int main()
{
  int a,b,i;
  printf("Enter the card number picked up by Patrick:\n");
  scanf("%d",&a);
  printf("Enter the card number picked up by Johnny:\n");
  scanf("%d",&b);
  printf("Patrick and Johnny must pick and arrange cards in below order\n");
  if(a<b)
  {
    for(i=a;i<=b;i++)
    {
      
    printf("%d\n",i);
    }
  }
    if(a>b)
    {
      for(i=a;i>=b;i--)
      {
        printf("%d\n",i);
      }
    }
    return 0;
  }
