#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int arr[n], sum=0,sum1=0, temp=0;
   for(int i=0; i<n; i++)
   {
      cin >> arr[i];
      sum +=arr[i];
   }
   sort(arr,arr+n);
   for(int i=n-1; i>=0; i--)
   {
      sum1 += arr[i];
      temp++;
      if(sum1>sum/2)
         break;
   }
   cout << temp << endl;
}
