#include<stdio.h>
int main()
{
  int a,b,c=0;
  float e,f,g;
  scanf("%d\n%f\n%d",&a,&e,&b);
  f=e*b;
  g=f*120/100;
  if(a<14)
  {
  if((a==11)||(a==12)||(a==4)||(a==6))
    c=1;
  switch(c)
  {
    case 0:
    
      printf("Hotel Tariff: Rs.%.2f",f);
      break;
    
    case 1:
    
      printf("Hotel Tariff: Rs.%.2f",g);
      break;
  }
  }
  else
  {
    printf("Invalid Input");
  }
  
   
  return 0;
}
