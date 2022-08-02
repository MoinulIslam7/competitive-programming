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
        cin >> X;
        if(X==0)
        {
            cout << "NULL\n";
        }
        else if( X<0 && X%2!=0)
        {
            cout << "ODD NEGATIVE"<<endl;
        }
        else if(X%2!=0 && X>0)
        {
            cout << "ODD POSITIVE\n";
        }
        else if(X%2==0 && X<0)
        {
            cout << "EVEN NEGATIVE\n";
        }
        else if(X%2==0 && X>0)
        {
            cout << "EVEN POSITIVE\n";
        }


    }
}

