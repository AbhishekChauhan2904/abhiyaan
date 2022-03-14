#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector <vi> vvi;
typedef vector <ll> vll;
typedef pair <int,int> pii;
typedef pair <long,long> pll;
typedef vector<pii> vpii;
#define REP(i,x,y) for(int i=x;i<y;i++)
void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b==c)||(b+c==a)||(c+a==b)||(a==b&&c%2==0)||(b==c&&a%2==0)||(a==c&&b%2==0)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
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