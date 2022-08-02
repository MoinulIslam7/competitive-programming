
#include<iostream>
using namespace std;
int main()
{
    float x=0.0;
    float a=1.0,b=2.0,c=3.0;
    for(int i=1; i<12; i++)
    {
        cout << "I=" << x << " J=" << a<< endl;
        cout << "I=" << x << " J=" << b<< endl;
        cout << "I=" << x << " J=" << c<< endl;

        x+=0.2;
        a+=0.2;
        b+=0.2;
        c+=0.2;
    }
}
