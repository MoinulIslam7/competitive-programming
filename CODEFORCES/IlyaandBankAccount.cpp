#include<bits/stdc++.h>
using namespace std;
int main()
{
    long
    long int n,n1,n2;
    cin >> n;
    if(n>=0)
    {
        cout << n << endl;
    }
    else if(n<0)
    {
        long long int x,y;
        x = n%10;
        n1 = n /10;
        y = n1%10;
        n2 = (n1-y) + x;
        if(x<=y)
        {
            cout<< n1 << endl;
        }
        else if(x>y)
            cout << n2 << endl;

    }
}
