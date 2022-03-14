#include<bits/stdc++.h>
using namespace std;
void sol(){
	string x;
	cin>>x;
	int s1=x.size();
  int k;
  if(s1<2){
   k=0;
  }
  else{
  	int val=0;
  	unordered_map<char,int>mp;
  	for(int i=0;i<x.size();i++){
  		mp[x[i]]++;
  	}
  	for(auto a: mp){
  		if(a.second>2){
  			val+=2;
  		}
  		else{
  			val=val+a.second;
  		}
  	}
  	k=val/2;
  }
  cout<<k<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		sol();
	}
}