#include<stdio.h>
#include<string.h>
int main()
{
  int  x,y,z;
  char lab[20];
 printf("Enter x\n");
  scanf("%d",&x); 
  printf("Enter y\n");
  scanf("%d",&y);
  printf("Enter z\n");
  scanf("%d",&z);
  printf("Enter the lab allocated for ACE training\n");
  scanf("%s",lab);
 if(strcmp(lab,"L1")==0)
 {
   if(y<z)
       {
    printf("L2 has the minimal seating capacity\n");
       }
   else
   {
     printf("L3 has the minimal seating capacity\n");
   }
 }
  else if(strcmp(lab,"L2")==0)
      {
        if(x<z)
        {
          printf("L1 has the minimal seating capacity\n");
        }
        else
        {
          printf("L3 has the minimal seating capacity\n");
        }
      }
        else if(x<y)
        {
          printf("L1 has the minimal seating capacity\n");
        }
        else
        {
          printf("L2 has the minimal seating capacity\n");
        }
    
           return 0;
}
