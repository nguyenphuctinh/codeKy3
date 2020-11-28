#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		string n;long long m,ans=0;
		cin>>n>>m;
		int l=n.length();
		for(int i=0; i<l; i++)
		{
			ans=ans*10+n[i]-'0';
			ans%=m;
		}
		cout<<ans<<endl;
	}
}

