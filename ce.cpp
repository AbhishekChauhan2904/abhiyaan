#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	int t;
	cin>>t;
	while(t--){
		double a,b;
         lli ans;
         cin>>a>>b;
         lli x=((a+b)/2);
         if(a==b){
         	ans=0;
         }
         else if(a>b){
         	ans=(ceil((b-(a-1))/2)+ceil(((a-1)-a)/2));
         }
      else{
      	ans=(ceil((b-(a-1))/2)+ceil(((a-1)-a)/2));
      }
      cout<<ans<<endl;
	}
	return 0;
}