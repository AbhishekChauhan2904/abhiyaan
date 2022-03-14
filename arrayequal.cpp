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
ll a,b,c;
cin>>a>>b>>c;
if(b-a==c-b||(a==b && b==c)){
	cout<<"YES"<<endl;
 }
 else if((2*b-c)%a==0&&2*b-c>0){
 	cout<<"YES"<<endl;
 }
 else if((2*b-a)%c==0&&2*b-a>0){
 	cout<<"YES"<<endl;
 }
 else if((a+c)%(2*b)==0){
 	cout<<"YES"<<endl;
 }
 else {
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
