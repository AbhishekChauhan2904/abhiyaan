#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
		int sum=0;
		for(int i=0;i<n;i++){
 sum+=(a[i]*b[i]);
}
char ch;
cin>>ch;
while(ch != 'E') { 
  switch(ch) {

case 'P':
cout<<sum<<endl;
break;

case 'S': 
int D;
cin>>D;

for(int i=0;i<n;i++){
	if(D==a[i]){
sum-=D;
}		    			
}    
break;

default: break;
  }
  cin>>ch;
}
return 0;
}