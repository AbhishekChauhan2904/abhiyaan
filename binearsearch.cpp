#include<bits/stdc++.h>
using namespace std;
int sol(int a[],int n,int x){
   int start=0;
    int  end=n;
    while(start<=end){
    	int mid=(start+end)/2;
    	if(a[mid]==x){
    		return mid;
    	}
    	else if(a[mid]<x){
         start=mid+1;
    	}
    	else{
    		end=mid-1;
    	}
    }
    return -1;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[n];
	}
	int x;
	cin>>x;
	int index=sol(a,n,x);
	cout<<index<<endl;
	return 0;
}