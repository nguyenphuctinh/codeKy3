#include <bits/stdc++.h> 
using namespace std; 

void findCommon(long long  ar1[], long long  ar2[], long long  ar3[], long long  n1, long long  n2, long long  n3, int &check) 
{ 
    long long  i = 0, j = 0, k = 0; 
    while (i < n1 && j < n2 && k < n3) 
         if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) 
         {   cout << ar1[i] << " ";   i++; j++; k++; check=0;} 
         else if (ar1[i] < ar2[j]) 
             i++; 
         else if (ar2[j] < ar3[k]) 
             j++; 
         else
             k++; 
    }
int main() 
{ 
   long long  t; cin>>t;
   while(t--)
   {
   	long long  ar1[123456],ar2[124567],ar3[123456];
 long long  n1, n2, n3; cin>>n1>>n2>>n3; 
	for(long long  i=0; i<n1; i++)
		cin>>ar1[i];
	for(long long  i=0; i<n2; i++)
		cin>>ar2[i];
	for(long long  i=0; i<n3; i++)
		cin>>ar3[i];
	int check =1;
    findCommon(ar1, ar2, ar3, n1, n2, n3,check); 
    if(check)
        cout<<"-1";
    cout<<endl;
   }
    return 0; 
}
