#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int even=0, odd=0, positive=0,negative=0;
    for(i=0; i<5; i++)
    {
        cin >> n;
         if(n%2==0)
        {
           even++;
        }
        if(n%2!=0)
        {
            odd++;
        }
        if(n>=0)
        {
            positive++;
        }
        if(n<0)
        {
            negative++;
        }
    }
    cout << even << " valor(es) par(es)"<<endl;
    cout << odd << " valor(es) impar(es)"<<endl;
    cout << positive << " valor(es) positivo(s)"<<endl;
    cout << negative << " valor(es) negativo(s)"<<endl;
}
