#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string str1;
    int o;
    cin>>o;
    cin>>str1;
    for(int I=1;I<=o;I++)
    {
        cout<<setw(18-(I-1));
        for (int i = 1; i < 2*I; i++)
        {
            cout<<str1;
        }
        cout<<endl;
    }
}
//m = 18-(n - 1)
//n n*