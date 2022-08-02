#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    int i,j;
    cin >> str;
    j=strlen(str);
    for(i=0; i<j; i++)
    {
        if(str[i]!='A' && str[i]!='O' && str[i]!='Y' && str[i]!='E' && str[i]!='U' && str[i]!='I' && str[i]!='a' && str[i]!='o' && str[i]!='y' && str[i]!='e' && str[i]!='u' && str[i]!='i')
        {
            if(str[i]<='A')
                str[i]+=32;
            printf(".%c",str[i]);
        }
    }
}
