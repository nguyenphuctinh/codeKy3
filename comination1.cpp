#include<iostream>
using namespace std;
int n,gt=0,a[123456];
void Try(int dem)
{
	for(char j=0; j<2; j++)
	{	
		a[dem]=j;
		if(dem!=n)	
			Try(dem+1);
		else
		{
		    for(int k=1; k<=dem; k++)
		        cout<<a[k];
		       cout<<" ";
		}
	}
}
int main()
{
	int t;cin>>t;	
	while(t--)
	{	
		gt=0;
		int dem=1;
		cin>>n;
		Try(dem);
		cout<<endl;
	}
}
