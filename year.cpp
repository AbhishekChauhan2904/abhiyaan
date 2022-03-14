#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c,d,ans;
	cin>>t;
	while(1){
        t++;
        ans=t;
        a=t%10;
        t=t/10;
        b=t%10;
        t=t/10;
        c=t%10;
        t=t/10;
        d=t%10;
        if((a!=b)&&(b!=c)&&(a!=d)&&(a!=c)&&(b!=d))
           {
           	break;
           }
           t=ans;
	}
	cout<<ans<<endl;

return 0;
}