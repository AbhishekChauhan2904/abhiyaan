#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
      cin>>a[i];
	}
	sort(a,a+4);
	int e=3;
	for(int i=0;i<3;i++){
		if(a[i]!=a[i+1]){
			e--;
		}
	}
	cout<<e<<endl;
}