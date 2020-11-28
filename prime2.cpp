#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		long long n; cin>>n;
		long long ans=0;
		while(n%2==0)
		{
			ans=2;
			n/=2;
		}
		for(int i=3; i<=sqrt(n); i+=2)
			while(n%i==0)
			{
				ans=i;
				n/=i;
			}
		if(n>2)
			ans=n;
		cout<<ans<<endl;
	}
}
