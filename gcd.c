#include<stdio.h>
int main()
{
int gcd(int a, int b)
{
    if (a == b)
        return a;

      if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int a = 98, b = 45;
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
