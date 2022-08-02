#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   string b;
   for(int i=0; i<t; i++)
   {
      cin >> b;
      int len = b.length();
      cout << b[0] << b[1];
      for(int j=3; j<len; j+=2)
      {
         cout << b[j];
      }
      cout << endl;
   }
}
