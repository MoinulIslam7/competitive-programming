#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin >> arr[j];
        }
        for(int k=0; k<n; k++)
        {
            if(k%2==0)
            {
                arr[k] = arr[k];
            }
            if(k%2!=0)
                arr[n-1] = arr[k];
        }
        for(int l=0; l<n; l++)
            cout << arr[l] << " ";
    }

}

