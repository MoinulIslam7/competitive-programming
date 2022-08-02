#include<bits/stdc++.h>
using namespace std;
removeduplicate(int arr[], int n)
{
   int i,j;
   for(i=0; i<n; i++)
   {
      for(j=0; j<i; j++)
      {
         if(arr[i] == arr[j])
            break;
      }
      if(i==j)
         cout << arr[i] << " " ;
   }
}
int main()
{
   int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
      cin >> arr[i];
   }
   removeduplicate(arr,n);

}
