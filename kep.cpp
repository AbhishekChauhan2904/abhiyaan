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
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	float e=(a*a)/(c*c*c);
	float f=(b*b)/(d*d*d);
	if(e==f){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
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