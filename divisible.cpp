#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
    int n;
    cin>>n;
    if(n==1){
    	cout<<3<<endl;
    }
    else if(n==2){
    	cout<<33<<endl;
    }
    else{
cout<<3;
for(int i=1;i<n-1;i++){
    cout<<"0";
}
cout<<3<<endl;
}
    }
	return 0;
}