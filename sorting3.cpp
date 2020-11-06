#include<bits/stdc++.h>
using namespace std;
bool isIncrease(int *a, int n)
{
	for(int i=0; i<n-1; i++)
		if(a[i]>a[i+1])
			return 0;
	return 1;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector <int> a(n);
		for(int i=0; i<n; i++)
			cin>>a[i];
		pair<int, int> arrPos[n];
	    for (int i = 0; i < n; i++)
	    {
	        arrPos[i].first = a[i];
	        arrPos[i].second = i;
	    }
	    sort(arrPos, arrPos + n);
	   	int b[123456];
	   	for(int i=0; i<n; i++)
	   	{
	   		b[i]=arrPos[i].second;	
		}
		int dem=0;
		while(isIncrease(b,n)==0)
		{
			int i=0;
			while(b[i]==i && i<=n) i++;
			if(i==n)
				break;
			swap(b[i], b[b[i]]);
			dem++;
		}
		cout<<dem<<endl;
	}
}
