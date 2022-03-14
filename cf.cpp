#include<bits/stdc++.h>
using  namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll p=2*abs(b-a);
    int res=0;
    int an=-1;
    if(b>p||a>p||c>p){
        res=an;
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