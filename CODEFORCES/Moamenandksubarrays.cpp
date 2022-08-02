#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,count=0, count1=0;
    cin >> t;
    for(int i=0; i<n; i++)
    {
        cin >> n >> k;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin >> arr[j];
            if(arr[j]>arr[j-1] && j!=0)
            {
                count++;
                count1= count1-1;
                cout << "inside if coount " << endl;
            }
            else{
                count1++;
                cout << "inside else " << endl;
            }
        }
        cout << count - count1 << endl;
        if((count-count1) <= k && (count-count1)>0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}
