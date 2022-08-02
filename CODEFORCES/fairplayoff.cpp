#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int arr[4];
        int a=0,b=0;
        for(int j=0; j<4; j++)
        {
            cin >> arr[j];
        }
        if(arr[0]>arr[1])
            a = arr[0];
        else
            a = arr[1];

        if(arr[2]>arr[3])
            b=arr[2];
        else
            b = arr[3];

        sort(arr,arr+4);
        if((a==arr[4-1] || a==arr[4-2]) && (b==arr[4-1]||b==arr[4-2]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
