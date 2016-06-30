#include<stdio.h>
int main()
{
  char a[50];
  float f,e;
printf("Enter event :\n");
  scanf("%s",a);
 printf("Enter Start Time :\n");
  scanf("%f",&f);
  printf("Enter End Time :");
  scanf("%f",&e);
  printf("\n%s :",a);
  printf("% 0.2f AM to ", f);
  printf("%0.2f PM ",e);
  return 0;
}
