
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,p,q,sum=0;
   cin >> n;
   for(int i=0; i<n; i++)
   {
      cin >> p >> q;
      if(q>p && (q-p)>=2)
         sum++;
   }
   cout << sum << endl;
}
