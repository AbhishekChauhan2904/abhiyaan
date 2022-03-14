#include<bits/stdc++.h>
using namespace std;
void sol(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int *p=new int[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sol(p,n);
	for(int i=0;i<n;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
	delete []p;
	return 0;
}