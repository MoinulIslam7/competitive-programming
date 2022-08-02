#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int N;
    int i;
    float a,b,c;
    float sum=0;
    cin >> N;
    for(i=1; i<=N; i++)
    {
       cin >> a >> b >>c;
       double sum = ((a/10) * 2) + ((b/10) * 3) + ((c/10) * 5);
        printf("%.1f\n",sum);
    }
}

