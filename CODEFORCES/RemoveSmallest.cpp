#include<bits/stdc++.h>
using namespace std;
void removesmallest()
{
    int n,temp=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);
    for(int i=1; i<n; i++)
    {
        if(arr[i]-arr[i-1]>1)
        {
            temp=1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(temp==0)
        cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        removesmallest();
    }
}
