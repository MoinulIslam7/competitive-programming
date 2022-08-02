#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i;
    float n;
    int j=0;
    float sum=0;
    for(i=0; i<6; i++)
    {
        cin >> n;
         if(n>0)
        {
           sum+=n;
           j++;
        }
    }
    float sum1 = sum/j;
    cout << j << " valores positivos"<<endl;
    printf("%.1f\n", sum1);
}

