#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
	if(n<2)
		return 0;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;int dem=0;
		for(int i=0; i<=sqrt(n); i++)
			if(isPrime(i))
				dem++;
		cout<<dem<<endl;
	}
}
