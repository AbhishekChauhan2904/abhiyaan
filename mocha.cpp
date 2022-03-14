#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
     	cin>>a[i];
     }
    int b[n];
    for(int k=0;k<n;k++)
   for(int i=0;i<n-1;i++){
   	for(int j=i+1;j<n;j++){
        b[k]=a[i]&a[j];
        
   	}
   }
   long long c=b[0];
   for(int i=0;i<n;i++){
   	if(b[i]<c){
        c=b[i];
   	}
   	else{
   		break;
   	}
   }
    cout<<c<<endl;
 
	}
	return 0;
}