#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
   int t; cin>>t;
	while(t--)
	{
		int n,arr[123456];
		cin>>n; 
		for(int i=0; i<n; i++)
			cin>>arr[i];
		int ans = 0;
		for (int i=0,j=n-1; i<=j;) 
		{ 
			if (arr[i] == arr[j]) 
			{ 
				i++; 
				j--; 
			} 
			else if (arr[i] > arr[j]) 
			{  
				j--; 
				arr[j] += arr[j+1] ; 
				ans++; 
		}
			else
			{ 
				i++; 
				arr[i] += arr[i-1]; 
				ans++; 
			} 
		} 
		cout << ans << endl; 
	}
}
