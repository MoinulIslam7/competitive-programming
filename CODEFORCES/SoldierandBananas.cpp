#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    int sum=0,banas=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++)
    {
        sum = sum + (i*k);
    }
    banas = sum - n;
    if(banas<=0)
        cout << "0" << endl;
    else
    cout << banas << endl;

}
