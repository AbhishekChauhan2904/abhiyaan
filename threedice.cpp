#include<bits/stdc++.h>
using namespace std;
int sol(){
	int n;
	    cin>>n;int a=0;int c=0;int v=1;
	    while(a<n){
	    	if(v%3!=0&&v%10!=3){
	    		c=v;
	    		a++;
	    	}
	    	v++;
	    }
   return c;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int b=sol();
	    cout<<b<<endl;
}     	return 0;
}