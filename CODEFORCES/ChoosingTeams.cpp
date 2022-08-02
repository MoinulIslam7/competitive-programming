#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, k;
   cin >> n >> k;
   int arr[n],sum=0;
   for(int i=0; i<n; i++)
   {
      cin >> arr[i];
      if(arr[i]+k<=5)
         sum++;
   }
   cout << sum/3 << endl;
}
