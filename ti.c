#include<stdio.h>
int main()
{
  int a,b;
 char c[50],d[50];
  float f,e;
  printf("Ticket 1 :\n");
  printf("Enter Ticket Number :\n");
  scanf("%d",&a);
  printf("Enter Name :\n");
  scanf("%s",c);
  printf("Enter Ticket Cost :\n");
  scanf("%f",&f);
  printf("Ticket 2 :\n");
  printf("Enter Ticket Number :\n");
  scanf("%d",&b);
  printf("Enter Name :\n");
  scanf("%s",d);     
 printf("Enter Ticket Cost :\n");
  scanf("%f",&e);
  printf("Ticket Details :\n");
  printf("Ticket 1 :\n");
  printf("Number : %d\n",a);
  printf("Name : %s\n",c);
  printf("Cost : %0.2f\n",f); 
  printf("Ticket 2 :\n");
  printf("Number : %d\n",b);
  printf("Name : %s\n",d);
  printf("Cost : %0.2f\n",e);
  return 0;
}
