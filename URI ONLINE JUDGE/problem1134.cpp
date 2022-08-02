#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y=0,z=0,a=0,i,sum=0;
    cin >> x;
    for(i=0; i<1000; i++)
    {
        if(x==1)
        {
            y++;
        }
        if(x==2)
        {
            z++;
        }
        if(x==3)
        {
            a++;
        }
        if(x==4)
        {
            break;
        }
        else
            cin >> x;
    }
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << y << endl;
    cout << "Gasolina: " << z <<endl;
    cout << "Diesel: " << a << endl;
}

