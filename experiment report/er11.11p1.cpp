#include<iostream>
using namespace std;
int add(int a,int b,int c,int d)
{
  float fen1,fen2,he=0;
  fen1=b / a;
  fen2=d / c;
  he=fen1 + fen2;
  return (he);
}
int sub(int a,int b,int c,int d)
{
 float fen1,fen2,cha=0;
  fen1=b / a;
  fen2=d / c;
  cha=fen1 - fen2;
  return (cha);
}
int main()
{
    float a,b,c,d=0;
    float e,f=0;
    cin>>a>>b>>c>>d;
    e=add(a,b,c,d);
    f=sub(a,b,c,d);
    cout<<"b/a与a/c的和是"<<e<<endl<<"b/a与a/c的差是"<<f; //计算有问题，没查出来。
}