#include<bits/stdc++.h>
using namespace std;
int main()
{
   double n,x,y;
   double sum =0;
   cin >> n >> x >> y;

   sum = round(n + ((n/100) * x) + ((y/100)*n));
   cout << sum << endl;

}
