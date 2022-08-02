#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    int n,m;
    cin >> n;
    for(int i=0; i<n; i++)
    {
       cin >> arr;
       cin >> m;
       if(arr=="Thor")
         cout << "Y\n";
       else
         cout <<"N\n";
    }
}
