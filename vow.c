#include<stdio.h>
int main()
{
  char c;
  printf("Enter a character\n");
  scanf("%c",&c);
 if((c>=65&&c<=90)||(c>=97&&c<=122))
  {
  if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
  {
    printf("Vowel");
  }
  else
  {
    printf("Consonant");
  }
  }
  else
  {
    printf("Not an alphabet");
  }
  return 0;
}
