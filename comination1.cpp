#include<bits/stdc++.h>
using namespace std;
int n,ok=0;
void Sinh(int a[])
{
	int i=n;
	while(a[i]!=0)
		i--;
	if(i==0)
	{
		ok=1;
		return;
	}
	a[i]=1;
	for(int j=i+1; j<=n; j++)
		a[j]=0;	
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n;
		int a[100]={0};
		for(int i=1; i<=n; i++)
				cout<<a[i];
		cout<<" ";
		ok=0;
		while(true)
		{
			Sinh(a);
			if(ok)
				break;
			for(int i=1; i<=n; i++)
				cout<<a[i];
			cout<<" ";
		}
		cout<<endl;
	}
}
