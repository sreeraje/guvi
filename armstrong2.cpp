#include<iostream.h>
class arm
{
int n, oN, re, r = 0;
  cout("Enter a integer: ");
    cin>>n;
  oN = n;
  void read() 
    {
        re = oN%10;
        r+= re*re*re;
        oN /= 10;
    }
    void display()
    {
    cout("%d is an Armstrong number.",n);
    else
        cout("%d is not an Armstrong number.",n);
}
