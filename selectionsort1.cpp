#include<bits/stdc++.h>
using namespace std;
void sol(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=a[i],index=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<min){
				min=a[j];
				index=j;
				swap(a[i],a[index]);
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