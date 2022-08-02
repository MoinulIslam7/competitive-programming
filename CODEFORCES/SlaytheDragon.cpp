
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0,arrsum=0,cont=1;
    cin >> n;
    int *arr = new int[n];
    int x[2],y[2];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        arrsum = arrsum + arr[i];
    }
    sort(arr,arr+n);
    cin >> m;
    for(int i=0; i<m; i++)
    {
        cin >> x[i] >> y[i];
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(x[i]==arr[j])
            {
                if((arrsum-arr[j]) >= y[i])
                    break;
            }
            else if(x[i]==arr[j] + cont)
            {
                if((arrsum - (arr[j]+cont)) >= y[i])
                {
                    sum += 1;
                    break;
                }
            }
        }
        cout << sum << endl;
    }
}


