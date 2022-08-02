#include<iostream>
using namespace std;
int main()
{
    int i, j, k, temp;
    cin >> i >> j>> k;
    for(int x=0;x<4;x++)
    if(i>j && i>k)
    {
        temp=i;
        i=j;
        j=temp;
    }
    cout << i << j << k;
}
