#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(a==0&&b==0)
        {
            cout<<"0\n";
            continue;
        }
        if((a-b)%2)
            cout<<"-1\n";
        else
        {
            if(a==b)
                cout<<"1\n";
            else
                cout<<"2\n";
        }
    }
    return 0;
}