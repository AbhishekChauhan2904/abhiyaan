#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
     int k,a,b,c,d,e;
     cin>>a>>b>>c>>d>>e;
     int x=a+c*e;
     int y=b+d*e;
     if(x<y){
     	cout<<"petrol"<<endl;
     }
     else if(y<x){
     	cout<<"desial"<<endl;
     }
     else{
     	cout<<"same price"<<endl;
     }
	}
	return 0;

}