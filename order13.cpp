#include<bits/stdc++.h>
#define ll long long
#define N 10004
using namespace std;
ll A[N],B[N];
ll maxSum(int n,int m)
{
    int t=min(n,m);
    ll maxS=0;
    ll mx;
    for(int i=0;i<t;++i)
    {
        mx=max(A[i]+B[m-1]-B[i],B[i]+A[n-1]-A[i]);
        if(mx>maxS)maxS=mx;
    }
    return maxS;
}
int main(){
	  int T,n,m;
	  cin>>T;
	   while(T--)
       {
          cin>>n>>m;
          cin>>A[0];
          for(int i=1;i<n;++i)
          {
              cin>>A[i];
              A[i]+=A[i-1];
          }
          cin>>B[0];
          for(int i=1;i<m;++i)
          {
              cin>>B[i];
              B[i]+=B[i-1];
          }
          cout<<maxSum(n,m)<<'\n';
       }
		return 0;
	}
/*
3
1 2 3
6
5 5 10 100 10 5
6
40 5 4 100 2 1
6
5 5 10 40 50 35
*/
/*
2 3
10 12
5 7 9
8 8
2 3 7 10 12 15 30 34
1 5 7 8 10 15 16 19
5 4
2 3 7 10 12
1 5 7 8
*/
