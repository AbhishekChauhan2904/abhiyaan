#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
 
 
//Write Code Here
int n,c;
char k;
cin>>n;
vector <char> v;
for (int i=0;i<n;++i){
    cin>>k;
    v.push_back(k);
    if (i!=0){
        if (v[i]==v[i-1]){
                c++;
        }
    }
}
cout<<c;
}