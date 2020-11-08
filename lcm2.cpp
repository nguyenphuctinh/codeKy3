#include<iostream>
using namespace std;
long long BCNN(long long a, long long b)
{	
	long long m=a,n=b;
	while(b!=0)
	{
		int tmp=a%b;
		a=b;
		b=tmp;
	}
	return (m*n)/a;
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n,a[1000],gt=1;
		long long kq=1;
		cin>> n;
		for(int i=1; i<=n; i++)
		{
			kq=BCNN(kq,i);
		}
		cout<< kq<< endl;
	}
}
