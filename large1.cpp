#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t; cin>>t;
	while(t--)
	{
		string x,y,z;
		cin>>x>>y;
		int l=x.length();
		if((x.length()==y.length()&&x.compare(y)<0)||x.length()<y.length()) 
		{
			l=y.length();
			swap(x,y);
		}
		int tinh=x.length()-y.length();
			for(int i=0; i<tinh; i++)
			    y='0'+y;
		for(int i=l-1; i>=0; i--)
		{
			string gt;
			if(x[i]<y[i]) 
			{
				gt=-y[i]+x[i]+58;
				z=gt+z;
				x[i-1]--;
			} 
			else
			{
				gt=x[i]-y[i]+48;
				z=gt+z;
			}
		}
		cout<<z<<"\n";
	}
}
