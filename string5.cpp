#include<iostream>
#include<algorithm>
using namespace std;
int re(string s)
{
	int i,b[124]={0},*max,a=s.length();
	for(i=0;i<a;i++) 
		b[s[i]]++;
	max=max_element(b+96,b+123);
	if(*max>a/2) 
		return 0;
	return 1;
}
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t; string s;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<re(s)<<endl;
	}
	return 0;
}
