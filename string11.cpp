#include<bits/stdc++.h>
using namespace std;
bool isContainer(string s1, string s2)
{
	map <char, int> mp1,mp2;
	for(int i=0; i<s2.length(); i++)
		mp2[s2[i]]++;
	for(int i=0; i<s1.length(); i++)
		mp1[s1[i]]++;
	for(map<char,int>::iterator it=mp2.begin(); it!=mp2.end(); it++)
		if(mp2[it->first]>mp1[it->first])
			return 0;
	return 1;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		string ans=""; int min=150,ok=0;
		for(int i=0; i<s1.length(); i++)
		{
			string tmp="";
			for(int j=i; j<s1.length(); j++)
			{
				tmp.push_back(s1[j]);
				if(isContainer(tmp,s2) && tmp.length()<min)
				{
					ok=1;ans=tmp;min=tmp.length();break;
				}
			}
		}
		if(ok)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;
	}
}
