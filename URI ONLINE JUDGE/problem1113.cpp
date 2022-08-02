#include<iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int m,n;
    int sum=0;
    int add1=0;
    int i,j=0,k=0;
    for(i=0; i<1000; i++)
    {
        cin >> m>> n;
        if(m==n)
        {
            break;
        }
        else if(m>n)
        {
            cout << "Decrescente"<< endl;
        }
        else if(m<n)
        {
            cout << "Crescente"<< endl;
        }

    }
}

