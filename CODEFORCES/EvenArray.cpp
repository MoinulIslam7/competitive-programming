#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int cont=0,cont1=0,n;
        cin >> n;
        int *arr = new int[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(i%2!=arr[i]%2)
            {
               if(i%2==0)
                cont++;
               else
                  cont1++;
            }
        }
        if(cont==cont1)
            cout << cont << endl;
        else
            cout << "-1"<< endl;
    }
}
