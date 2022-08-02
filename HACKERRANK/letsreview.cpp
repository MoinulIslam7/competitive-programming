#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    for(int i=0; i< t; i++)
    {
        cin >> s;
        int len = s.length();
        for(int i=0; i<len; )
        {
           if(i%2==0)
           {
              cout << s[i];
              i+=2;
              if(i>=len)
              {
                 i = 1;
                 cout << " ";
              }
           }
           else if(i%2!=0)
           {
              cout << s[i];
              i+=2;
           }
        }
        cout << endl;
    }
}
