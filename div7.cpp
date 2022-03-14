#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector <vi> vvi;
typedef vector <ll> vll;
typedef pair <int,int> pii;
typedef pair <long,long> pll;
typedef vector<pii> vpii;
//const int N=0;
#define REP(i,x,y) for(int i=x;i<y;i++)
void solve(){
	int n;
	cin>>n;
	if(n%7==0){
		cout<<n<<"\n";
		return;
	}
 n+=n%10;
 REP(i,0,10){
 	int temp=n-i;
 	if(temp%7==0){
 		cout<<temp<<endl;
 		return;
 	}
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
