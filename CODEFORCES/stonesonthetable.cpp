#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
    int n,cunt=0;
    cin >> n;
    char s[n];
    cin >> s;

    for(int i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
            cunt++;
    }
    cout << cunt;
    cout << endl;
}

