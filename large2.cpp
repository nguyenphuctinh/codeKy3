#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string x,y,z;
		cin>>x>>y;
		while(x.length()<y.length())
			x='0'+x;
		while(x.length()>y.length())
			y='0'+y;
		for(int i=x.length()-1; i>=0; i--)
		{
			string tmp;
			if(x[i]-'0'+y[i]-'0'>=10)
			{
				tmp=x[i]-'0'+y[i]-10;
				z=tmp+z;
				if(i>=1)
					x[i-1]++;
				else
				z='1'+z;
			}
			else
			{
				tmp=x[i]-'0'+y[i];
				z=tmp+z;
			}
		}
		cout<<z<<endl;
	}
}
