
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char str[100],st[100];
    cin >> str >> st;
    if(str<st)
    {
        cout << "-1" << endl;
    }
    else if(st<str)
    {
        cout << "1" << endl;
    }
    else if(str==st)
    {
        cout << "0"<< endl;
    }
}
