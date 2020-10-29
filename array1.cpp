#include<iostream>

using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n;long long a[10055],m;
		cin>>n;
		for(int i=0; i<n; i++)
			a[i]=-1;
		for(int i=0; i<n; i++)
		{
			cin>>m;
			if(m>=0&&m<=n)
				a[m]=m;
		}
		for(int i=0; i<n; i++)
		{
			cout<<a[i]<<" ";
			a[i]=0;
		}
		cout<<endl;
	}
}
