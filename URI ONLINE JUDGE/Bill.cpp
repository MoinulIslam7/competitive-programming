#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, sum=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
       cin >> m;
       if(m%2==0)
         cout << "0\n";
       else
         cout <<"1\n";
    }
}

