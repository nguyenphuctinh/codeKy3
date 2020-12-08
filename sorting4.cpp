#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
	int t; cin>>t;
	while(t--)
	{
		int n,m,a[123456],b[123456],c[123456];
		cin>>n>>m;
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<m; i++)
			cin>>b[i];
		int min=(a[0]<b[0]) ? a[0] : b[0];
		int max=(a[n-1]>b[m-1]) ? a[n-1] : b[m-1];
		int l=max-min+1;
	//	cout<<max<<" "<<min<<" ";
		for(int i=min; i<=max; i++)
			c[i]=0;
		for(int i=0; i<n; i++)
			c[a[i]]++;
		for(int i=0; i<m; i++)
			c[b[i]]++;
		for(int i=min; i<=max; i++)
			if(c[i]==1||c[i]==2)
				cout<<i<<" ";
		cout<<endl;
		for(int i=min; i<=max; i++)
			if(c[i]==2)
				cout<<i<<" ";
		cout<<"\n";
	}
}
