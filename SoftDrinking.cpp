#include<bits/stdc++.h>
using namespace std;
int main(){
	int  n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int c1=k*l;
	int d1=c1/nl;
	int e=c*d;
	int f=p/np;
	int d2=min(d1,e);
	int f1=min(d2,f)/n;
	cout<<f1<<endl;
	return 0;
}