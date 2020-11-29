#include<bits/stdc++.h>
using namespace std;
int m,n;string s;
int main()
{
	string a;
	getline(cin,a);
	string ans="";
	for(int i=0; i<a.length(); i++)
		if(a[i]<='Z'&&a[i]>='A')
			a[i]+=32;
	int i=a.length()-1;	
	for(; i>=0; i--)
	{
		if(a[i]==' ')
			break;
		ans.insert(ans.begin(),a[i]);
	}
	for(int j=0; j<i; j++)
	{
		if(j==0)
		{
			ans.push_back(a[j]);
			continue;
		}
		if(a[j]<='z'&&a[j]>='a'&&a[j-1]==' ')
			ans.push_back(a[j]);
	}
	cout<<ans+"@ptit.edu.vn";	
}
