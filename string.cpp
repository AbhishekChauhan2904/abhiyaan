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
	string s;
	cin>>s;
	int count0=0;
	int count1=0;
REP(i,0,s.size()){
		if(s[i]=='0'){
			count0++;
		}
		else{
			count1++;
		}
	}
	int ans=min(count0,count1);
	if(count1==count0){
		ans--;
	}
  cout<<ans<<endl;
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
