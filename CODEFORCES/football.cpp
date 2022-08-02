#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int x=0, y=0,i;
    cin >> s;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]==s[i+1])
            x++;
    }
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]==s[i+1])
            y++;
    }
    if(x>=7 || y>=7)
        cout << "YES" << endl;
    else
        cout << "NO"<< endl;
}
