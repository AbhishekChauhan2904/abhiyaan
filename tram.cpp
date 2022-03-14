#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int count=0;
	int sum=0;
	while(t--){
		int a,b;
		cin>>a>>b;
		sum-=a;
		sum+=b;
		count=max(count,sum);
	}
	cout<<count<<endl;
	return 0;
}