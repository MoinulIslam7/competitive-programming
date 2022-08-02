#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,cont=0;
    cin>> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        if(a!=b)
        {
            cont =1;
        }
   }
    if(cont ==1 )
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
}
