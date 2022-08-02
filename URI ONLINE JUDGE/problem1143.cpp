#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j=1;
    cin >> N;
    for(i=1; i<=N*2; i++)
    {
        int a=j;
        int b=a*i;
        int c=b*i;
        cout << a << " ";
        cout << b << " ";
        cout << c << " ";
        cout << endl;
    }
    cout << endl;
}
