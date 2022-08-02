#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int N;
    int X;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        if(i%2==0)
        {
           X=i*i;
           printf("%d^2 = %d\n", i, X);
        }
    }
}

