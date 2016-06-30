#include<stdio.h>
int main()
{
  int d,e,f;
scanf("%d",&d);
scanf("%d",&e);
scanf("%d",&f);
if(d<e)
{
 if(e<f)
 {
   if(f>d)
   {
     printf("yes");
   }
 }

  else
  {
    printf("no");
  }
}
if(d>e)
{
  if(e>f)
  {
    if(f<d)
    {
      printf("yes");
    }
  }

else
{
  printf("no");
}
}
return 0;
}
