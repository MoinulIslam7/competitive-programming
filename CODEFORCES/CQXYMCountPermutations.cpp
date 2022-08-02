#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        long long int x,y,n,sum1=0,sum=0;
        cin >> x >> y >> n;
        cout<<(n-y)/x*x+y<<endl;
    }
}
