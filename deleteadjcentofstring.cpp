#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector <vi> vvi;
typedef vector <ll> vll;
typedef pair <int,int> pii;
typedef pair <long,long> pll;
typedef vector<pii> vpii;
const int N=0;
#define REP(i,x,y) for(int i=x;i<y;i++)
void solve(){
	string s,t;
	cin>>s>>t;
	bool ans=false;
	REP(i,0,s.size()){
		if (s[i] == t[0] && i % 2 == 0)
                ans = true;
	}
   cout << (ans ? "YES" : "NO") << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
