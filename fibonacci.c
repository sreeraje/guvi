#include<stdio.h>
int main()
{
int  n,  f= 0, t = 1,p,s

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (s= 0; s <= n; s++)
    {
        
        if(s <= 1)
        {
            p=s;
            p=f+t;
            f=t;
            t=p;
            printf("%d",p);
            }
            }
            return 0;
            }
         
        
