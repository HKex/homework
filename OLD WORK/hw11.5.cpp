#include<iostream>
#include<cmath>
using namespace std;
int calculate(int n)
{
    double z,y = 0;
   for(int i = 1;i<=n;i++)
    { 
      z = pow(i,3);
      y += z;
      
    } 
    return (y);
}
int main()
{
    double a= 0;
    cin>>a;
    cout<<calculate(a)<<endl;
}