#include<bits/stdc++.h>
using namespace std;
void sol(int a[],int n ){
	bool present;
	for(int i=0;i<n-1;i++){
		present=0;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				present=1;
			}
		}
		if(present==0){
			break;
		}
	}
}
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
  sol(a,n);
  for(int i=0;i<n;i++){
  	cout<<a[i]<<" ";
  }
  cout<<endl;
	}
	return 0;
}