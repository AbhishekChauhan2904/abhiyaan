#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
#define scan(a,n) for(long long int index=0;index<n;index++) cin>>a[index];
#define print(a,n) for(long long int index=0;index<n;index++) cout<<a[index]<<" ";cout<<endl;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define vli vector<long long int>
#define vlli vector<pair<long long int,long long int>>
#define vsi vector<string>
#define all(n) n.begin(),n.end()
#define forn(i,a,b) for(i=a;i<b;i++)
ll mul(ll x,ll y){  return (x*y)%mod;}
ll power(ll x, ll y) {ll res = 1; x %= mod;
 while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}
ll mod_inv(ll x) {return power(x, mod - 2);}
ll fact(ll n) {ll res = 1; for (ll i = 2; i <= n; i++) res = mul(res , i); return res; } 
ll nCr(ll n, ll r) { return mul(fact(n),mod_inv(mul(fact(r),fact(n - r))));} 

int  solve(string& s){
	int n=s.size();
	int present=0;
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-1-i]){
			swap(s[i],s[n-1-i]);
			swap(s[i],s[i+1]);
			present=1;
		}
	}
	return present;
}

 
int main() {
  fast;
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
//   #endif
  ll t=1;
  cin>>t;
  for(ll tt=1;tt<=t;tt++){
  	string s;
  	cin>>s;
  	int t1=solve(s);
  	if(t1==1){
      cout<<"Case #"<<tt<<": ";
cout<<s<<endl;
  	}
  	else{
  		cout<<"Case #"<<tt<<": ";
  		cout<<"IMPOSSIBLE"<<endl;
  	}
  	
  }
return 0;    
 }  