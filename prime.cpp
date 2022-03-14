#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int falg=1;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0){
			falg=0;
			break;
		}
	}
	if(n<=1)
		falg=0;
	if(falg==1){
		cout<<"prime"<<"\n";
	}
	else{
		cout<<"not prime"<<"\n";
	}
	return 0;
}
