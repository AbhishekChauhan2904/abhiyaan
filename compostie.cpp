#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int count=0; int b[n];int c=0;
	for(int j=2;j<=n;j++){
		for(int i=1;i<=n;i++){
			if(c%j){

          c+=a[i];
          count++;
          b[i]=i;
          
                    	
          }
          else{
          	continue;
          }
      }}
      if(count>2){
      	cout<<count<<endl;
      	for(int i=1;i<=n;i++){
      		cout<<b[i]<<" ";
      	}
      	cout<<endl;
      }
		}
     return 0;
	}
