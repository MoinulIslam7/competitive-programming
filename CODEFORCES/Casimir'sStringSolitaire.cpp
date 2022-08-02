#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        int length = s.length();
        cout << length;
        for(int i=0; i<length; i++)
        {
            int a,b,c,sum;
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else if(s[i]=='C')
                c++
            }
        if(a>c)
        {
            b = b-a;
            sum = b - (b-c);
        }
        else if(c>a)
        {
            b = b-c;
            sum = b - (b-a);
        }
        if(sum == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
