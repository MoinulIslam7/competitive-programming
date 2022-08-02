#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   for(int i=0; i<t; i++)
   {
      int n,h,count=0;
      cin>> n >> h;
      int arr[n];
      for(int i=0; i<n; i++)
      {
         cin >> arr[i];
      }
      sort(arr,arr+n);
      for(int j=n-1; j>=0; j--)
      {
         h = h - arr[i];
         count++;
         if(h<=0)
            break;
         if(j==0 && h!=0)
         {
            j = n-1;
         }
      }
      cout << count << endl;
   }
}
