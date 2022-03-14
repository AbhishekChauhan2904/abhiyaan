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
int a,b;
cin>>a>>b;
long long int sum=1;
for(int i=1;i<=b;i++){
	if(i<=10){
		sum*=2;
		if(sum>a){
			sum=a;
			break;
		}
	}
	else{
		sum*=3;
		if(sum>a){
			sum=a;
			break;
		}
	}
}
cout<<sum<<endl;
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