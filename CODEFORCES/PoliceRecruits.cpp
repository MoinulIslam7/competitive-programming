#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,sum=0,count=0;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
      cin >> arr[i];
      if(arr[i]>0)
         sum = sum + arr[i];
      if(arr[i]==-1)
      {
         sum = sum + arr[i];
         if(sum<0)
         {
            count++;
            sum = sum +1;
         }
      }
   }
   cout << count << endl;
}
