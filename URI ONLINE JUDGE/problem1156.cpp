#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,x,y,sum1=0;
    while(1)
    {
        cin >> x;
        if(x==0)
        {
            break;
        }
        j=x+10;
        for(k=x,sum1=0;k<j; k++)
        {
            if(k%2==0)
            {
                sum1=sum1+k;
            }
        }
         cout << sum1 << endl;
    }

}
