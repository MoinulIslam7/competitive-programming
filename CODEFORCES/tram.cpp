#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j=0,k=0,l=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a >> b;
        l=l+(b-a);
        k = l;
        if(k>j)
            j=k;
    }
    cout << j;
}
