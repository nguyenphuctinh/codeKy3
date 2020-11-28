#include<bits/stdc++.h>
using namespace std;
long long m;
long long power(long long n, long long k)
{
	if(k==0)
		return 1;
	long long x=power(n,k/2);
	if(k%2==0)
		return x*x%m;
	return x*x%m*n%m;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string n;long long ans=0,b;
		cin>>n>>b>>m;
		int l=n.length();
		for(int i=0; i<l; i++)
		{
			ans=ans*10+n[i]-'0';
			ans%=m;
		}
		cout<<power(ans,b)<<endl;
	}
}

