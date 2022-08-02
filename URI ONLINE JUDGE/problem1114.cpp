#include<iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int n;
    for(int i=0; n!=2002; i++)
    {
        cin >> n;
        if(n==2002)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
            cout << "Senha invalida" << endl;
    }
}
