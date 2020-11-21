#include<bits/stdc++.h>
using namespace std;
string s;int ans=0;
int Try()
{
	int l=s.length()-3,ok=0;
	for(int j=0; j<l; j++)
	{
	//	cout<<j<<" ";
		if(s[j]=='1'&&s[j+1]=='0'&&s[j+2]=='0')
		{
			s.erase(j,3);
			ans+=3;ok=1;
		}
	}
	if(ok)
		return ans;
	else
		Try();
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		cin>>s;
		cout<<Try()<<endl;
	}
}
