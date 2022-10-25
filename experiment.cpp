#include <iostream>
using namespace std;
int main( )
{   
    int a=15,b=8,c=-9;
cout<<~a<<"  "<<~b<<"  "<<~c<<endl;
cout<<(a&b)<<"  "<<(a&c)<<endl;
cout<<(a|b)<<"  "<<(a|c)<<endl;
cout<<(a^b)<<"  "<<(a^c)<<endl;
cout<<(a<<2)<<"  "<<(c<<2)<<endl;
cout<<(b>>2)<<"  "<<(c>>2)<<endl;  
}