#include<bits/stdc++.h>
using namespace std;
#define tt    long long
int main(){
	tt t;
	cin>>t;
	while(t--){
    tt a,b,c;
    cin>>a>>b>>c;
     cout << max(0ll, max(b, c) + 1 - a) << " ";
    cout << max(0ll, max(a, c) + 1 - b) << " ";
    cout << max(0ll, max(b, a) + 1 - c) << "\n";
 
	}
	return 0;
}