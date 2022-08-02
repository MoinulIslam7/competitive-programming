#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int k=0;
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'W' && str[i+1]== 'U' && str[i+2]=='B')
        {
            i = i+2;
            if(k==1)
            {
               cout << " ";
               k=0;
            }
        }
        else
        {
            cout << str[i];
            k=1;
        }
    }
    cout << endl;
}
