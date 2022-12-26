#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float jisuan(float tiaojian,float jvli,int cishu)
{
 
 if(cishu == 10)
 {
    cout<<jvli<<endl;
    cout<<tiaojian/2<<endl;
   return 0;
 }
   tiaojian = tiaojian / 2;
   cishu = cishu +1;
   jvli = jvli + 2*tiaojian;
   jisuan(tiaojian,jvli,cishu);
   return 0;
   
}
int main()
{
    int gaodu,u,i;
    u=100;
    i=1;
    gaodu = 100;
    jisuan(gaodu,u,i);
}