#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;

int  main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,r;cin>>n>>r;
		long long C[1234][1234];
		for(int i=0; i<=n; i++)
		{
			for(int j=0; j<=i; j++)
			{
				if(i==j)
					C[i][j]=1;
				else if(j==0)
					C[i][j]=1;
				else
					C[i][j]=(C[i-1][j]%M+C[i-1][j-1]%M)%M;
			}
		}
		cout<<C[n][r]<<endl;
	}	
}
