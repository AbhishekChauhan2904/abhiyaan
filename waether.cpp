#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
    int a[7];
    int count=0;
    for(int i=0;i<7;i++){
    	cin>>a[i];
    	if(a[i]==1){
    		count++;
    	}
    }
    int d=7-count;
   if(count>=d){
   	cout<<"YES"<<endl;
   }
   else{
     cout<<"NO"<<endl;
   }
	}
	return 0;
}