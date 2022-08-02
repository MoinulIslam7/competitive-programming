#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,j,sum=0;
    float ave=0;
    while(1)
    {
        cin >> n;
        if(n<0)
        {
            break;
        }
        else
        {
            i++;
            sum=sum+n;

        }
    }
    ave =(float) sum/i;
    printf("%.2f\n",ave);
}
