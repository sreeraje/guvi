#include<stdio.h>
int main()
{
  int L1,L2,L3;
  printf("Enter x\n");
  scanf("%d",&L1);
  printf("Enter y\n");
  scanf("%d",&L2);
  printf("Enter z\n");
  scanf("%d",&L3);
  if((L1<L2)&&(L1<L3))
  {
    printf("L1 has the minimal seating capacity");
  }
  else if(L2<L3)
  {
    printf("L2 has the minimal seating capacity");
  }
  else
  {
    printf("L3 has the minimal seating capacity");
  }
  return 0;
}
