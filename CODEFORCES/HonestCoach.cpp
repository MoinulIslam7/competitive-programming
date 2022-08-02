#include<bits/stdc++.h>
using namespace std;
void honestcoach()
{
    int n,mini=0,min1=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    mini = arr[n-1] - arr[0];
    for(int i=n; i>0; i--)
    {
        int min1 = (arr[i-1]-arr[i-2]);
        if(min1<mini && min1>=0)
        {
            mini = min1;
        }
    }
    cout << mini << endl;
}
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        honestcoach();
    }
}
