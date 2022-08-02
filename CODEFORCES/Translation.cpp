#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[101], t[101];
    gets(s),gets(t);
    if(strcmp(s,strrev(t)) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


}
