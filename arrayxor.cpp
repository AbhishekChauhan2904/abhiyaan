#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

// your code goes here

  int T;
  cin>>T;
     while(T--){
         

    int N,K;
    cin>>N>>K;

    int M = N-1;
    long long max_shifts = pow(2,M);
     long long sum, temp=pow(2,N)-1;
     if(K>max_shifts)
     sum = 2*temp*max_shifts;
     
     else 
     sum = 2*temp*K;
     cout<<sum<<endl;


}

return 0;
}