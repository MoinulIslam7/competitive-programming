#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1002];
    int len,j, count=0,count1=0;
    for(int i=0; i<1002; i++)
    {
        cin >> s[i];
        if(s[i]=='}')
        {
            len=i;
            break;
        }
    }
    for(int i=0; i<len; i+2)
    {
        for(int j=0; j<len; i+2)
        {
            if(s[i] == s[j])
                count++;
        }
    }
    cout << count;

}
