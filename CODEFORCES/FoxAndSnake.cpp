#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,j;
    cin >> n >> m;
    for(j=1; j<=n; j++)
    {
        for(int i=1; i<=m; i++)
        {
           if(j%4==2)
           {
              if(i==m)
               cout << "#";
              else
               cout << ".";
           }
           else if(j%4==0)
           {
              if(i==1)
               cout << "#";
              else
               cout << ".";
           }
           else
            cout <<"#";
        }
        cout << endl;

    }
}
