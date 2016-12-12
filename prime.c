#include<stdio.h>
int main()
{
    int n, i, h= 0;
    scanf("%d",&n);
  for(i=2; i<=n/2; ++i)
    {
       if(n%i==0)
        {
            h=1;
           }
    }

    if (h==0)
        printf("%d is a prime number.",&n);
    else
        printf("%d is not a prime number.",&n);
    
    return 0;
    }
