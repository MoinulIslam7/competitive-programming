#include<iostream>
using namespace std;
int main()
{
    int i;
    float n;
    int sum=0;
    for(i=0; i<6; i++)
    {
        cin >> n;
         if(n>0)
        {
           sum++;
        }
    }
    cout << sum << " valores positivos"<<endl;
}
