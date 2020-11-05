#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s2,s1;
		getline(cin,s1);
	//	cin.ignore();
		getline(cin,s2);
	//	cout<<s1<<" "<<s2;
		set <string> se1,se2;
		for(int i=0; i<s1.length(); i++)
		{
			string tmp="";
			while(s1[i]!=' ' && s1[i]!='\0')
				{
					
				tmp.insert(tmp.end(), s1[i]);
				i++;
			}
			se1.insert(tmp);
		}
		for(int i=0; i<s2.length(); i++)
		{
			string tmp="";
			while(s2[i]!=' ' && s2[i]!='\0')
				tmp.insert(tmp.end(), s2[i++]);
			se2.insert(tmp);
		}
		for(set<string>::iterator it=se1.begin(); it!=se1.end(); it++)
		{
			int tmp=se2.size();
			se2.insert(*it);
			if(tmp!=se2.size())
				cout<<*it<<" ";
		}
		cout<<endl;
	}
}
