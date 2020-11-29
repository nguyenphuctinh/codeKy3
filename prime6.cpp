#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,m; cin>>n;
		vector<int>a(n+1,1);
		a[1]=0;a[0]=0;
		for(int i=2; i<=n; i++)
			if(a[i]==1)
				for(int j=i*2; j<=n; j+=i)
					a[j]=0;
		for(int i=0; i<=n; i++)
			if(a[i]&&a[n-i])
			{
				cout<<i<<" "<<n-i;
				break;
			}
		cout<<endl;
	}
}
