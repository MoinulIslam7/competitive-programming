#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,k,a=1,b=0,c=0,d=0,e=0;
    for(int k=0; k<1000; k++)
    {
        if(a==1)
        {
                cin >> x >> y;
                e++;
                cout << "Novo grenal (1-sim 2-nao)\n";
                if(y>x)
                {
                    b++;
                }
                else if(x==y)
                {
                    d++;
                }
                else if(x>y)
                {
                    c++;
                }
        }
        else
            break;
        cin >> a;
    }
    cout << e << " grenais\n";
    cout << "Inter:" <<c<< endl;
    cout << "Gremio:" << b << endl;
    cout << "Empates:" << d << endl;
    cout << "Inter venceu mais\n";
}
