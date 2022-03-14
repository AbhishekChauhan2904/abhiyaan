#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.size();
	 set<char> s1;
    for(int i=0;i<len;i++){
        s1.insert(s[i]);
    }
	if(s1.size()%2==0){
		cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
}