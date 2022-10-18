#include <iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m>2 && m<6)
    {
        cout << "Spring"<<endl; 
    }
    else if(m>5 && m<9)
    {
        cout << "Summer"<<endl; 
    }
    else if(m>8 && m<12)
    {
        cout << "Autumn"<<endl; 
    }
    else if(m>12 && m<13)
    {
        cout << "Winter"<<endl; 
    }
    else if(m>0 && m<3)
    {
        cout << "Winter"<<endl; 
    }
    else if(m>12 || m<1)
    {
        cout << "Error"<<endl; 
    }
}