#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int N;
    int i;
    int j=1;
    int temp;
    for(i=1; i<=100; i++)
    {
       cin >> N;
       if(N>j)
       {
           j=N;
           temp=i;
       }

    }
    cout << j << endl<< temp <<endl;
}

