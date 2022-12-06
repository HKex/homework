#include<iostream>
using namespace std;
int main()
{
	int n,a[23],b[23];
	n=0;
	for(int i=1;i<=20;i++)
	{
		cin>>a[i];
	}
	for(int z=1;z<=20;z++)
	{
		b[z]=a[z];
	}
	for(int h=20;h>0;h--)
	{
		for(int s=h-1;s>0;s--)
		{
		if(a[h]>a[s])
		{
			n=a[s];
			a[s]=a[h];
			a[h]=n ;
			
		}
		}
	}
	
		for(int x=1;x<=20;x++)
	{
		cout<<b[x]<<" ";
	}
	cout<<endl;
		for(int d=1;d<=20;d++)
	{
		cout<<a[d]<<" ";
	}
}
