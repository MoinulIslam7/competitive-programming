#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float A[100];
    int i;
    for(i=0; i<100; i++)
    {
        cin >> A[i];
    }
    for(i=0; i<100; i++)
    {
        if(A[i]<=10)
        {
        printf("A[%d] = %.1f\n",i,A[i]);
        }
    }
}
