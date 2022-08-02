#include<bits/stdc++.h>
using namespace std;
void Sleeper()
{
   int l,r,a=0,b=0,maxi=0;
   cin >> l >> r;
   a = r/2 + 1;
   maxi = max(l,a);
   cout << r % maxi << endl;
}
int main()
{
   int t;
   cin >> t;
   for(int i=0; i<t; i++)
   {
      Sleeper();
   }
}
