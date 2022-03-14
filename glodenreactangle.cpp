#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define in insert
#define vll vector<ll>
#define endl "\n"
#define pll pair<ll,ll>
#define all(x) (x).begin() , (x).end()
#define f first
#define s second
#define pr(x) cout<<x<<endl;
#define pr2(x,y) cout<<x<<" "<<y<<endl;
#define pr3(x,y,z) cout<<x<<" "<<y<<endl;
#define prv(v) for(auto x:v) cout<<x<<" ";
#define ffs fflush(stdout);
#define int ll
#define sz(x) (ll)x.size()
using namespace std;
 
const ll N =(1e5+5);
const ll MOD = 1e9+7;
const ll INF = LLONG_MAX;
const ll LOG = 29;
#define PI 3.141592653589793238 
 
 
long long binpow(long long a, long long b) {
     a%=MOD;    
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a);
        a = (a * a);
 
        
        b >>= 1;
    }
     res%=MOD;
    return res;
}
void solve(){
    int t;
    cin>>t;
    int count=0;
    while(t--){
      int l,r;
cin>>l>>r;
if(l>r) swap(l,r);
float c=l/r;
if(16LL * l <= 10LL * r && 10LL * r <= 17LL *l ){
count++;
    }
}
    cout<<count<<endl;

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
       
{
        solve();
    }    
     
}