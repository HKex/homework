#include <iostream>
using namespace std;
int main()
{
    int N,a;
    cin>>N;
    if(N<=2)
    {a = N ;
    cout<<a;
    }
    else if (N%2)
    {
    a = N * (N-1) * (N-2);
    cout << a;
    }
    else if (N%3)
    {
        a = N * (N-1) * (N-3);
        cout<<a;
    }
    else 
    {
        a = (N-1) * (N-2) * (N-3);
        cout<<a;
    }
    
    
    
}