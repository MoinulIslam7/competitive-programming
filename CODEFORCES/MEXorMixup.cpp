#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,a,b;
   cin >> t;
   for(int i=0; i<t; i++)
   {
      cin >> a >> b;
      for(int j=0; j<n; j++)
      {
         if(s[j]=='D')
         {
            s[j]='U';
         }
         else if(s[j]=='U')
         {
            s[j] = 'D';
         }
         cout << s[j];
      }
      cout << endl;
   }
}
