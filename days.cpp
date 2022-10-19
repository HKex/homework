
#include <iostream>
using namespace std;

int main()
{
    int m,d,day;
    cin>>m>>d;
    switch (m)
    {
    case 1 :
        day = d;
        cout<<day;
        break;
    
    case 2 :
        day = 31+d;
        cout<<day;
        break;
    case 3 :
        day = 59+d;
        cout<<day;
        break;
    case 4 :
        day = 90+d;
        cout<<day;
        break;
    case 5 :
        day = 120+d;
        cout<<day;
        break;
    case 6 :
        day = 151+d;
        cout<<day;
        break;
    case 7 :
        day = 181+d;
        cout<<day;
        break;
    case 8 :
        day = 212+d;
        cout<<day;
        break;
    case 9 :
        day = 243+d;
        cout<<day;
        break;
    case 10 :
        day = 273+d;
        cout<<day;
        break;
    case 11 :
        day = 304+d;
        cout<<day;
        break;
    case 12 :
        day = 334+d;
        cout<<day;
        break;
    default:
        cout<<"error";
        break;
    }
}