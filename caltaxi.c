#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;
  float g;
  printf("Enter the driver salary\n");
  scanf("%d",&a);
  printf("Enter the car mileage in km per litre\n");
  scanf("%d",&b);
  printf("Enter the cost of petrol per litre\n");
  scanf("%d",&c);
  printf("Enter the taxi fare for a km\n");
  scanf("%d",&d);
  printf("Enter the distance of travel\n");
  scanf("%f",&g);
  e=a+((c*g)/b);
  if(g<=3)
  {
    f=50;
  }
  else
  {
    f=50+(g-3.0)*d;
  }
  if(e<f)
  {
    printf("Minimal cost travel is by audi\n");
  }
  else 
  {
    printf("Minimal cost travel is by taxi\n");
  }
  return 0;
}
