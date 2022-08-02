#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,sum=0;
   cin >> n;
   if(n>=100)
   {
      sum =sum + n/100;
      n=n%100;
   }
   if(n>=20 && n<100)
   {
      sum = sum + n/20;
      n = n%20;
   }
   if(n>=10 && n<20)
   {
      sum = sum + n/10;
      n = n%10;
   }
   if(n>=5 && n<10)
   {
      sum = sum + n/5;
      n = n%5;
   }
   if(n>=1 && n<5)
   {
      sum = sum + n/1;
      n = n%1;
   }
   cout << sum << endl;
}
