#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
ll re(ll a[],ll n,ll sum){
	ll count=0;
    for(int i=0;i<n-2;i++){
        int j=i+1,k=n-1;
        while(j<k){
            if(a[i]+a[j]+a[k]>=sum)
                k--;
            else{
                count+=(k-j);
                j++;
            }
        }
    }
    return count;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		ll n,k,a[5000];
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		cout<<re(a,n,k)<<endl;
	}	
	return 0;
}
