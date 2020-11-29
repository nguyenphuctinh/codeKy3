#include<bits/stdc++.h>
using namespace std;
int m,n;string s;
int main()
{
		string a,b;
		getline(cin,a);
		getline(cin,b);
		a.erase(a.find(b),b.length()+1);
		cout<<a;	
}
