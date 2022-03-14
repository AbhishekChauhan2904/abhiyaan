#include<bits/stdc++.h>
#define ll long long int
using namespace std ;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll maxsubeuence= -1;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
			maxsubeuence=max(maxsubeuence,a[i]);
		}		

       ll result=0;
			
		for(ll i=k-1;i<n;i++){
			if(a[i]==maxsubeuence){
				result+=(n-i);
			}
		}
       cout<<result<<endl;
	}
}