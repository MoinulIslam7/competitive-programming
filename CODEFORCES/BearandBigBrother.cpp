#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cunt=0;
    cin >> a >> b;
    for(int i=0; ; i++)
    {
        a = a*3;
        b = b*2;
        cunt++;
        if(a>b)
            break;
    }
    cout << cunt;
}
