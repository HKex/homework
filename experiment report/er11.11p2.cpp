#include<iostream>
using namespace std;
int zh(int m,int n)
{
  if(n==0)
  {
    return 1;
  }
  else if(n==1)
  {
    return m;
  }
  else if(n>m - n)
  {
    return m;
  }
  else
  {
   return zh(m-1,n-1) + zh(m-1,n);
  }
}
int main()
{
  int l,m,n=0;
  cin>>m>>n;
  l=zh(m,n);
  cout<<l;

}