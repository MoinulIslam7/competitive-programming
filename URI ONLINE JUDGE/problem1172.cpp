#include<iostream>
using namespace std;
int main()
{
    int x[10];
    int i,j=0;
    for(i=0; i<10; i++)
    {
        cin >> x[i];
    }
        for(i=0; i<10; i++)
        {
            if(x[i]<=0)
                x[i]=1;
        }
        for(i=0; i<10; i++)
        {
            cout <<"x["<<i<<"] = "<<x[i] << endl;
        }
}
