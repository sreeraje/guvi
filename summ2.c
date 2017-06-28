#include<stdio.h>
#include<conio.h>
int main()
{
 int a[50];
    int n,i,max,min,c;
    clrscr();
  printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
 for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    if(a[i]<min)
        {
            min = a[i];
        }
        c=max+min;
    }
   printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("sum =%d",c);
  getch();
    return 0;
} 
