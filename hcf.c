#include<stdio.h>
int main()
{
int i, n1, n2, m, hcf=1;
 printf("Enter any two numbers to find HCF: ");
    scanf("%d %d", &n1, &n2);
  m = (n1<n2) ? n1 : n2;
 for(i=1; i<=m; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
 
    printf("HCF of %d and %d = %d\n", n1, n2, hcf);
    return 0;
}
