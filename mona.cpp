#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)
using namespace 
std;typedef long long ll;
typedef unsigned long long int ull ;
const int MOD=1e9+7;
const double pi = 2*acos(0.0);
const double eps = 1e-10 ;
int main(){
     ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int tt;
 cin>>tt;
 while(tt--)
     {
          int n;
           cin>>n;
           vector<int> p(n);
           for(auto &item:p)
            cin>>item;
       if(p[0]){
        cout<<n+1<<" ";
         for(int i=1;i<=n;i++) cout<<i<<" "; cout<<endl;
    }
else if(!p[n-1]){
     for(int i=1;i<=n+1;i++) 
          cout<<i<<" ";
           cout<<endl;
      }
      else
          {
           int flag=-1;
            for(int i=0;i<n-1;i++)
               {if(p[i]==0 &&p[i+1])
                    { flag=i+1; break;}
               } 
               if(flag==-1) cout<<-1<<endl;
               else{
                    for(int i=1;i<=flag;i++)
                         cout<<i<<" ";cout<<n+1<<" ";
                    for(int i=flag+1;i<=n;i++) 
                         cout<<i<<" ";
                    cout<<endl;
                     } } }
                     return 0;
                }