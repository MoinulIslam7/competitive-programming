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
        if(m==0 || m<0 || n==0|| n<0)
        {
            break;
        }
        else if(m<n)
        {
            k=0; add1=0;
            for(int k=m; k<=n;k++)
            {
                add1+=k;
                cout << k << " ";
            }
            cout << "Sum="<< add1 << endl;
        }
        else if(m>n)
        {
            j=0; sum=0;
            for(int j=n;j<=m; j++)
            {
                sum+=j;
                cout << j << " ";
            }
            cout << "Sum="<< sum << endl;
        }

    }
}
