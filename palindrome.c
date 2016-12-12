#include<stdio.h>
int main()
{
    int n, reversedI = 0, r, originalI;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalI = n;
 while( n!=0 )
    {
        r = n%10;
        reversedI = reversedI*10 + r;
        n /= 10;
    }
if (originalI == reversedI)
        printf("%d is a palindrome.", originalI);
    else
        printf("%d is not a palindrome.", originalI);
    
    return 0;
}
