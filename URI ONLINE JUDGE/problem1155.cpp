#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i=1.00;
    float sum=0;
    float ave=0.00;
    float j=1.00;

    for(i=1.00; i<=39.00; i+=2)
    {
        sum= (float) (i/j);
        ave = ave + sum;
        j=j*2;
    }

    printf("%.2f\n",ave);
}

