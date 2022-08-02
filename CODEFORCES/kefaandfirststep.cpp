#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1,count1=1;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]>=arr[i-1])
        {
            count++;
            count1= max(count1,count);
        }
        else
            count=1;
    }
    cout << count1 << endl;
}
