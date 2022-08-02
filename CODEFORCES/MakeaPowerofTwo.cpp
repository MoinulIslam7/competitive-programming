#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void poweroftwo()
{
   int n,count=0,digit=0;
   cin >> n;
   while(n!=0)
   {
      n = n/10;
      digit++;
   }
   if((ceil(log2(n)) == floor(log2(n)))==1)
      cout << count << endl;
   else if(n%2!=0)
   {
      n = n + digit;
   }

}
int main()
{
   int t;
   cin >> t;
   for(int i=0; i<t; i++)
   {
      poweroftwo();
   }
}
