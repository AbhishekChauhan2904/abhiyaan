#include<bits/stdc++.h>
using namespace std;
void sol(){
	int n;
	cin>>n;
	int count=0;
	string s,k;
	cin>>k;
	s=k;
	sort(s.begin(),s.end());
	for(int i=0;i<n;i++){
		if(k[i]!=s[i])
		{
			count++;
		}
	}
	cout<<count<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		sol();
	}
	return 0;
}