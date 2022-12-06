#include<iostream>
using namespace std;
int main()
{
	int a[10],sum;
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=10;j++)
	{
		for(int c=1;c<10-j;c++)
		{
			if(a[j]>a[j+1])
			{
				sum=a[j];
				a[j]=a[j+1];
				a[j+1]=sum; 
			}
		}
	}
	for(int h=1;h<=10;h++)
	{
		cout<<a[h]<<endl;
	}
}
