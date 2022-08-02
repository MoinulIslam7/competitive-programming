#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n,i,l=0;
    char s[120];
    cin >> s;
    n = strlen(s);
    for(int i=0; i<n; i++)
    {
        if(s[i]=='h' && l==0)
            l++;

        else if(s[i]=='e' && l==1)
            l++;

        else if(s[i]=='l' && l==2)
            l++;

        else if(s[i]=='l' && l==3)
            l++;

        else if(s[i]=='o' && l==4)
            l++;

        if(l==5)
            break;
    }
    if(l==5)
        cout << "Yes" << endl;
    else
        cout << "NO" << endl;
}
