#include<iostream>
using namespace std;
int main()
{
    int x,y,i;
    for(int i=0; i<1000; i++)
    {
        cin >> x >> y;
        if(x==0 || y==0)
        {
            break;
        }
        else if(x>0 && y>0)
        {
            cout << "primeiro\n";
        }
        else if(x>0 && y<0)
        {
            cout << "quarto\n";
        }
        else if(x<0 && y>0)
        {
            cout << "segundo\n";
        }
        else if(x<0 && y<0)
        {
            cout << "terceiro\n";
        }
    }
}
