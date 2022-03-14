#include<bits/stdc++.h>
using  namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll p=2*abs(b-a);
    int res=0;
    if(b>p||a>p||c>p){
    	res=-1;
    }
    else{
    	res=c+(p/2);
    	if(res>p){
    		res=c-(p/2);
    	}
    }
    cout<<res<<endl;
	}
	return 0;
}