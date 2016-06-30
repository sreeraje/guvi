#include<stdio.h>
int main()
{
       int a,b,c,d;
       scanf ("%d",&a);
       scanf("%d",&b);
      scanf("%d",&c);
      scanf("%d",&d);
      printf("%d,%d\n",a,b);
      printf("%d,%d\n",a,(b+d));
      printf("%d,%d\n",(a+c),(b+d));
       printf("%d,%d\n",(a+c),b);
     return 0;
}
