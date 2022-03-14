#include <iostream>
using namespace std;

int main() {
	// your c
	int t;
	cin>>t;
	while(t--)
{
    int n,a,b;
    cin>>n>>a>>b;
    string x; cin>>x;
    int answer=0;
    if(b<0)
    {  
        int var=0; char f=x[0],m=x[0];
        for(auto it:x)
        {
            if(it!=f&&it!=m) {var++; } f=it;
        }
        var+=1;
        answer=n*a+var*b;
    }
    else
    {
        answer=n*a+n*b;
    }
    cout<<answer<<endl;

	}
	    
	
	return 0;
}

