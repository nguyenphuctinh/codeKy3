#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x; cin>>n>>x;
		int a[1234567];
		for(int i=0; i<n; i++)
			cin>>a[i];
		int l=0,r=0,min=n+1,sum=0;
	
		while(r<n)
		{
		//	sum=0;
			while(sum<=x&&r<n)
			{
				sum+=a[r++];
			}
			
			while(sum>x&&l<n)
			{
				if(min>r-l&&sum>=x)
				min=r-l;
				sum-=a[l++];	
			}
			
			
		}
		if(min!=n+1)
		cout<<min<<endl;
		else
			cout<<"-1"<<endl;
			
	}
}
