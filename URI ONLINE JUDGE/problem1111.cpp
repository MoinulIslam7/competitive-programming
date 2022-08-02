#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int i,j,a,b,flag=0,sum=0;
    cin >> x;
    for(i=2; i<=x; i++)
    {
        flag=0;
        for(j=1; j<=x; j++)
        {
        if(i%j==0)
        {
            flag++;
        }
        else
        {
            sum=i+j;
            if(sum==x)
            {
                cout << i <<" "<< j;
            }
        }
        }
    }

}
