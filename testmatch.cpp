#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
    int a[5];
    int k=0,l=0;
    for(int i=0;i<5;i++){
    	cin>>a[i];
        if(a[i]==1){
        	k++;
        }
        else if(a[i]==2){
        	l++;
        }
    }
    if(k>l){
    	cout<<"INDIA"<<endl;
    }
    else if(k<l){
    	cout<<"ENGLAND"<<endl;
    }
    else{
    	cout<<"DRAW"<<endl;
    }

	}
	return 0;
}