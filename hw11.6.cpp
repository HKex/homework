#include<iostream>
using namespace std;
int main()
{
    int n;
   cin>>n;   
   if (n==0)
  {
    cout<<"0"<<endl;
  }
    int h[100];
    int i;
  for(i = 0;n>0;i++)
  {
   h[i] = n%2;
   n  = n/2;

  }
  for (i = i-1; i >= 0; i--)
  {
    cout<<h[i];
  }
  
  
}