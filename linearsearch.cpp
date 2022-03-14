#include<bits/stdc++.h>
using namespace std;
int sol(int a[],int n,int x){
for(int i=0;i<n;i++){
	if(a[i]==x){
		return i;
	}
}
return -1;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	int index=sol(a,n,x);
	cout<<index<<endl;
	return 0;
}