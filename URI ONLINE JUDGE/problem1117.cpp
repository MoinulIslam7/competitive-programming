#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y,a=0,b=0,ave=0;
    int i,j,m=1,n;
    for(int i=0; i<1000;)
    {
        if(n==2)
        {
            break;
        }
        while(m)
        {
            cin >> x ;
            if(x>=0 && x<=10)
            {
                a=x;
                break;
            }
            else
                cout << "nota invalida\n";
        }
        while(m)
        {
            cin >> y ;
            if(y>=0 && y<=10)
            {
                b=y;
                break;
            }
            else
                cout << "nota invalida\n";
        }
        ave=(a+b)/2;
        cout <<"media = "<< fixed <<setprecision(2)<< ave<< endl;

        cout << "novo calculo (1-sim 2-nao)\n";

        for(int k=0; k<100; k++)
        {

            cin >> n;
            if(n==2)
            {
                break;
            }
            else if(n>3 || n<0)
            {
                cout << "novo calculo (1-sim 2-nao)\n";
            }

            else if(n==1)
            {
                i++;
                break;
            }
        }
    }
}
