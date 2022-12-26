#include<iostream>
using namespace std;
int sum(int a,int n)
{
    int c,t=0;
    c=0;
    t = a;
  for ( int i = 1; i <= n; i++)
  {
    c = a+c;
    a = a*10+t;
    

  }
  cout<<c<<endl;
  return 0;
}

int main()
{
    int a,b=0;
    cin>>a>>b;
   sum(a,b);
}