#include<stdio.h>
int main()
{
 int cardNumber,remainder,oddSum=0,evenSum=0;
printf("Enter the card picked up by Johnny:\n");
 scanf("%d",&cardNumber);
  
for(;cardNumber!=0;cardNumber=cardNumber/10)
{
  remainder=cardNumber%10;
  if(remainder%2==0)
  {
    evenSum=evenSum+remainder;
  }
  else
  {
    oddSum=oddSum+remainder;
  }
}
if(oddSum==evenSum)
  printf("Johnny will win the Card Game\n");
else
  printf("Johnny will not win the Card Game\n");
return 0;
}
