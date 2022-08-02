#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int X[N];
    int i,j=0,small=1000;
    for(i=0; i<N; i++)
    {
        cin >> X[i];
    }
    for(i=0; i<N; i++)
    {
        if(small>X[i])
        {
            small=X[i];
            j=i;
        }
    }
    cout <<"Menor valor: "<< small << endl << "Posicao: " << j << endl;
}
