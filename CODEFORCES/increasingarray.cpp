/***
**              ALLAHU AKBAR
**      Bismillahir Rahmanir Rahim
**
**     Author: Moinul Islam (Infinitecoder)
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,count=0;
    cin >> n;
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
       cin >> arr[i];
    }
    for(int i=1; i<n; i++)
    {
       if(arr[i-1]>arr[i])
       {
          int rem = arr[i-1] - arr[i];
          arr[i] = arr[i] + rem;
          count=count + rem;
       }
    }
    cout << count <<endl;
}

