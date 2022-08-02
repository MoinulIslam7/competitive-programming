#include<iostream>
using namespace std;
int main()
{
    int i, X, howManyOdd = 6;
    cin >> X;
    for( i = X; i < (X+(howManyOdd*2)) ; i+=2)
    {
        int odd;
        if(i % 2 == 0)
        {
            odd = i + 1;
            cout << odd << endl;
        }
        else
        {
            odd = i;
           cout << odd << endl;
        }
    }
    return 0;
}

