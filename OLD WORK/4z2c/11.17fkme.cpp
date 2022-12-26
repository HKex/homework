#include<iostream>
using namespace std;
int xbloveu()
{
    int a=0;
  for (int i = 1; i <= 100; i++)
  {
    if (i%3 == 0)
    {
        a += i;
    }
    
  }
  return (a);
}
int main()
{
    int b;
    b=xbloveu();
    cout<<b<<endl;
}