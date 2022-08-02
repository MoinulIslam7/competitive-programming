#include<bits/stdc++.h>
using namespace std;
void candies()
{
    int n,x=0,k=2,sum=0;
    cin >> n;
    for(k=2; k<40; k++)
    {
        sum = (pow(2,k) -1);

        if(n % sum)
            continue;

        x = n / sum;
        break;
    }
    cout << x << endl;
}
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        candies();
    }
}
