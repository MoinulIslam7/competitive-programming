#include<iostream>
#include<cmath>
using namespace std;
int sroot(int i);
long sroot(long i);
double sroot(double i);
int main()
{
    cout << "square root of 90.34 is : " << sroot(90.34) << endl;
    cout << "square root of 90L is : " << sroot(90L) << endl;
    cout << "square root of 90 is : " << sroot(90) << endl;
    return 0;
}
int sroot(int i)
{
    cout << "computing integer root " << endl;
    return sqrt(i);
}
long sroot(long i)
{
    cout << "computing long root " << endl;
    return sqrt(i);
}
double sroot(double i)

{
    cout <<  "computing double " << endl;
    return sqrt(i);
}
