#include<bits/stdc++.h>
using namespace std;
int docTep(ifstream &file)
{
	int n;
	file>>n;
	return n;
}
int main()
{
	vector<int> a;
	ifstream file;
	file.open("document.txt", ios::in);
	while(file.eof()!=1)
		a.push_back(docTep(file));
	for(int i=0; i<a.size(); i++)
		cout<<a[i];
}
