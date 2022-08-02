#include <iostream>
using namespace std;
int main()
{
    int N, X, a, b, c, d=0,temp;
    cin >> N;
    for(a=1; a<=N; a++)
    {
        temp=1;
        cin >> X;
        for(b=2; b<X; b++)
        {
            if(X%b==0)
            {
                temp=0;
                break;
            }
            else if(X%b!=0)
            {
                temp=1;
            }
        }
        if(temp==0)
        {
            cout <<X << " nao eh primo\n";
        }
        else if(temp==1)
        {
            cout << X << " eh primo\n";

        }
    }
}

