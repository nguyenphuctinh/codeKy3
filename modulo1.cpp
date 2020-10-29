#include<bits/stdc++.h>
using namespace std;
int p;
long long power(int n,int k)
{
	if(k==0)
		return 1;
	long long x= power(n, k/2);
	if(k%2==0)
		return x*x%p;
	else
		return x*(x*n%p)%p;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int x,y;cin>>x>>y>>p;
		cout<<power(x,y)<<endl;
	}
}
