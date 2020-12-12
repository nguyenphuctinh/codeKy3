#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,a[1234],b[1234];
		cin>>n;
		for(int i=0; i<n; i++)
			cin>>a[i];
		sort(a,a+n+0);
		int m=n-1;
		for(int i=0; i<n; i+=2)
			b[i]=a[m--];
		m=0;
		for(int i=1; i<n; i+=2)
			b[i]=a[m++];
		for(int i=0; i<n; i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
}
