#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        int a=0,b=0,c=0,sum=0;
        cin >> s;
        int length = s.length();
        for(int i=0; i<=length; i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else if(s[i]=='C')
                c++;
        }
        if(b==(a+c))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
