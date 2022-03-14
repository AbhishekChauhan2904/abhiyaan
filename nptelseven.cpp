#include<bits/stdc++.h>
using namespace std;
int mode(int arr[], int n){
	int max_count=0;
	int a=0;
	for (int i=0; i<n; i++)
  {
   int count=1;
   for (int j=i+1;j<n;j++)
       if (arr[i]==arr[j])
           count++;
   if (count>max_count)
      max_count = count;
  }

  for (int i=0;i<n;i++)
  {
   int count=1;
   for (int j=i+1;j<n;j++)
       if (arr[i]==arr[j])
           count++;
   if (count==max_count)
       a=arr[i];
  }
    return a;
}
int main(){
int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int m = mode(arr, n);

	cout << m << endl;
	return 0;
}