#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=0;
    char str[10];
    cin >> n;
    while(n--)
    {
        cin >> str;
        if(str[1]== '+')
        {
            x=x+1;
        }
        else if(str[1]=='-')
        {
            x=x-1;
        }
        x=x;
    }
    cout << x << endl;
}
