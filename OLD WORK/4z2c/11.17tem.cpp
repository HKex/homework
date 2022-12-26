#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float xb(float f)
{
    float c=0;
    c = ((f-32) *5) / 9;
    return (c);
}
int main()
{
  float f,c;
  cin>>f;
  c=xb(f);
  cout<<fixed<<setprecision(4)<<c<<endl;

}