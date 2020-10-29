#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector <int> a(n,1);
		for(int i=2; i<=n; i++)
		{
			if(a[i])
			{
				cout<<i<<" ";
				for(int j=i; j<=n; j+=i)
					a[j]=0;
			}
		}
		cout<<endl;
	}
}
