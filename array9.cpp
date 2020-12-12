#include<bits/stdc++.h>
using namespace std;
class mang
{
	private:
		int n;
		long long a[13248];
	public:
		void nhapmang()
		{
			cin>>n;
			for(int i=0; i<n; i++)
				cin>>a[i];	
		}	
		void sapDatPhanTu()
		{
			if(n!=1)
			{
				long long *b= new long long[n];
				for(int i=0; i<n; i++)
					b[i]=a[i];
				a[0]=b[0]*b[1];
				a[n-1]=b[n-1]*b[n-2];
				for(int i=1; i<n-1; i++)
					a[i]=b[i-1]*b[i+1];	
				delete b;
			}
		}
		void display()
		{
			for(int i=0; i<n; i++)
				cout<<a[i]<<" ";
		}
};
int main()
{
	int t; cin>>t;
	while(t--)
	{
		mang arr;
		arr.nhapmang();
		arr.sapDatPhanTu();
		arr.display();
		cout<<endl;
	}
}
