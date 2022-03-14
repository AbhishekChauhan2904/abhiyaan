#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		int a,b,c;
		cin>>x>>y>>z;
		cin>>a>>b>>c;
		int d=x+y+z;
		int e=a+b+c;
		if(d<e){
			cout<<"B"<<endl;
		}
		else{
			cout<<"A"<<endl;
		}
	}
	return 0; 
}