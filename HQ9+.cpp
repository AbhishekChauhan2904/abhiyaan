#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.size();
	int count=0;
	for(int i=0;i<len;i++){
		if('H'==s[i]){
         count++;
		}
		else if('Q'==s[i]){
			count++;
		}
		else if('9'==s[i]){
			count++;
		}
		else if('+'==s[i]){
			count++;
		}
	}
	if(count==0){
		cout<<"NO"<<endl;
	}
	else {
		cout<<"YES"<<endl;
	}
}