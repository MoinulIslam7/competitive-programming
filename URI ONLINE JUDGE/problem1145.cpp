#include<iostream>
using namespace std;
int main()
{
    int a,b,d=0,i,j;
    cin >> a >> b;
    for(i=1; i<=b; i++)
    {
        cout << i << " ";
        if(i%3==0)
        {
            cout << endl;
        }
    }

}
