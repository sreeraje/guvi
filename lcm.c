#include<stdio.h>
int main()
{
int a,b,c;
    printf("Enter the integers: ");
    scanf("%d %d", &a, &b);
  c = (a>b) ? a : b;
 while(1)
    {
        if( c%a==0 && c%b==0 )
        {
            printf("The LCM of %d and %d is %d.", a, b,c);
        }
        ++c;
    }
    return 0;
}
