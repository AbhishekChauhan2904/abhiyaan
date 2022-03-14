#include<bits/stdc++.h>
using namespace std;
int kandan(int a[],int n){
	int current_ends=0;
	int largest_sum=0;
	for(int i=0;i<n;i++){
		current_ends=current_ends+a[i];
		if(largest_sum<current_ends){
			largest_sum=current_ends;
		}
		if(current_ends<0){
			current_ends=0;
		}
	}
	return largest_sum;
}
int main(){
	int n;
	cin>>n;
	int * p=new int[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	int ans=kandan(p,n);
	cout<<ans<<endl;
	delete []p;
	return 0;
}