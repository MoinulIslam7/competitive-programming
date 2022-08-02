#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    int temp=0;
    cin >> p;
    int len = 101;
    for(int i=0; i< len; i++)
    {
        if(p[i]>=33&&p[i]<=126)
        {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
            temp=1;
        }
    }
    if(temp==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
