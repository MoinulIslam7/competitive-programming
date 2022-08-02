#include<iostream>
using namespace std;
int abs(int h);
long abs(long n);
double abs(double n);
int main()
{
    cout <<"absolute value of -10 : " << abs(-10) << endl;
    cout << "absolute value of -10L : " << abs(-10L) << endl;
    cout << "absolute value of -10.01 : " << abs(-10.01) << endl;
    return 0;
}
int abs(int n)
{
    cout << "in integer abs() " << endl;
    return n<0? -n : n;
}
long abs(long n)
{
    cout << "in long abs() " << endl;
    return n<0 ? -n : n;
}
double abs(double n)
{
    cout << "in double abs()" << endl;
    return n<0 ? -n : n;
}
