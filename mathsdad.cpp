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
	int n;
	cin>>n;
	 int type;
    if (n % 3 == 1)
        type = 1;
    else
        type = 2;
    int sum = 0;
    while (sum != n) {
        cout << type;
        sum += type;
        type = 3 - type;
    }
    cout << '\n';
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
