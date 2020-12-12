#include<iostream>
#include<algorithm>
using namespace std;
int re(int *a,int n,int k){
	int i,ok=-1;
	a=new int [n];
	for(i=0;i<n;i++) 
		cin>>a[i];
	sort(a,a+n);
	if(a[n-1]-a[0]<k) 
		return -1; 
	for(i=0;i<n;i++)
	{
//		if(a[i]+k>a[n-1]) 
//			break;
		if(binary_search(a,a+n,a[i]+k))
		{
			ok=1; break;
		} 
	}
	delete a;
	return ok;
}
int main(){
	int *a,n,k,t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<re(a,n,k)<<endl;
	}
	return 0;
}
