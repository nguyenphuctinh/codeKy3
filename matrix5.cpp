#include<iostream>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t; cin>>t;
	while(t--)
	{
		int n,max=0,tong=0; cin>>n;
		vector<vector <int> > a(n,vector<int>(n));
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
			{
				cin>>a[i][j];
				tong+=a[i][j];
			}
		for(int i=0; i<n; i++)
		{
			int sum=0;
			for(int j=0; j<n; j++)
				sum+=a[i][j];
			if(sum>max)
				max=sum;
		}
		for(int j=0; j<n; j++)
		{
			int sum=0;
			for(int i=0; i<n; i++)
				sum+=a[i][j];
			if(sum>max)
				max=sum;
		}
		cout<<max*n-tong<<'\n';
	}
}
