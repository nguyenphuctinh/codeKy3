#include<iostream>
using namespace std;
int main(){
	int n,t,i,sum; cin>>t;
	string a;
	while(t--){
		cin>>a; sum=0;
		n=a.length();
			for(i=n-1;i>=0;i--){
				if(a[i]=='1'){
					if((n-i-1)%4==1) sum+=2;
					if((n-i-1)%4==2) sum+=4;
					if((n-i-1)%4==3) sum+=8;
					if((n-i-1)%4==0) sum+=6;
				}
			}
			if(sum%5==0) cout<<"Yes\n";
			else cout<<"No\n";
	}
	return 0;
}
