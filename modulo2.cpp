#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,m,ok=0;
		cin>>a>>m;
		for(int i=0; i<m; i++)
			if((a*i)%m==1)
			{
				cout<<i<<endl;
				ok=1;
				break;
			}
		if(!ok)
			cout<<"-1"<<endl;
	}
}
