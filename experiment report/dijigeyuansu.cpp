#include<iostream>
using namespace std;
int main()
{
	int a[10],sum,l;
	l=0;
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	cin>>sum;
	for(int i=1;i<=10;i++)
	{
		if(a[i]==sum)
		{
			cout<<"这个数是数组第"<<i<<"个元素的值"<<endl;
			l=1;
			break;
		}
	}
	if(l==0)
	{
		cout<<"无此数"<<endl;
	}
}
