#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b,c,r,n;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c;
        int n;
        if(a>b)
            r = a-b;
        else
            r = b- a;
        n = r*2;
        if(a>n || b>n || c>n)
            cout << "-1" << endl;
        else
        {
            if(c+r<=n)
                cout << c+r << endl;
            else if(c-r<=n && c-r>0)
                cout << c-r << endl;
            else
                cout << "-1" << endl;
        }

    }
}
