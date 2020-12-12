#include<bits/stdc++.h>
using namespace std;
bool checkMax(string a, string b)
{
	if(a+b>b+a)
		return 1;
	else
		return 0;	
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector <string> myVector;
		myVector.resize(n);
		for(int i=0; i<n; i++)
		{
			cin>>myVector[i];
		}
		sort(myVector.begin(), myVector.end(), checkMax);
		for(int i=0; i<myVector.size(); i++)
			cout<<myVector[i];
		cout<<endl;
	}
	
}
