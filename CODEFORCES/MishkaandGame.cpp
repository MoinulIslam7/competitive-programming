#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,miska=0,chris=0,m,c;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> m >> c;
        if(m>c)
         miska++;
        else if(c>m)
         chris++;
    }
    if(miska == chris)
    {
       cout << "Friendship is magic!^^" << endl;
    }
    else if(miska > chris)
    {
       cout << "Mishka" << endl;
    }
    else if(chris > miska)
    {
       cout << "Chris" << endl;
    }
}
