#include<iostream>
using namespace std;
int main()
{
    int x,i,j,k;
    while(1)
    {
        cin >> x;
        if(x==0)
        {
            break;
        }
        else if(x>0)
        {
            for(j=1; j<x; j++)
            {
                cout << j << " ";

            }
            cout << x << endl;
        }
    }
}
