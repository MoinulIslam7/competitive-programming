#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j, temp=0;
    char s[100];
    cin >> s;
    for(i=0; i< strlen(s); i+=2)
    {
        for(j=0; j<strlen(s); j+=2)
        {
            if(s[i] < s[j])
            {
                temp=s[i];
                s[i]= s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0; i<strlen(s); i++)
    {
        cout << s[i];
    }
}
