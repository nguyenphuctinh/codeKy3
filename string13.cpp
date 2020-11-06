#include<iostream>
#include<set>
using namespace std;
int main()
{ios_base::sync_with_stdio(false); 
	int t; cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int k,dem=0,kq=0,bad=0; cin>>k;
		set <char> se;
		for(int i=0; i<s.length(); i++)
		{
			se.insert(s[i]);
			if(se.size()==k)
			{
				kq++;
				bad=1;	
			}	
			if((se.size()>k || i==s.length()-1) && bad==1)
			{
				i=dem++;
				se.clear();
			}
		}
		cout<<kq<<endl;
	}
}
