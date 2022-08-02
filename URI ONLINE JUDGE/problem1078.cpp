#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int N;
    int i;
    int sum=0;
    cin >> N;
    for(i=1; i<=10; i++)
    {
        sum=i*N;
        printf("%d x %d = %d\n",i,N,sum);
    }
}
