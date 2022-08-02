#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x==1)
            sum = 1;
    }
    if(sum==1)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
}
