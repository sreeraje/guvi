#include<stdio.h>
int main()
{
int a[100];
    int i, m, min, size;
 printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    m = arr[0];
    min = arr[0];
for(i=1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }

      if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    printf("Melement = %d\n", m);
    printf("Mielement = %d", mi);

    return 0;
} 
