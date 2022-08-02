#include<iostream>
using namespace std;
int main()
{
    int N;
    int X;
    int j=0,k=0;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> X;
        if(X>=10 && X<=20)
        {
           j++;
        }
        else
            k++;
    }
     cout << j <<" in"<<endl << k<<" out"<< endl;
}

