#include<iostream>
#include<cctype>
using namespace std;
char min(char a, char b);
int min(int a, int b);
double min(double a, double b);
int main()
{
    cout << "min is : " << min('X', 'a') <<endl;
    cout << "min is : " << min(10 , 10) << endl;
    cout << "min is : " << min(0.2234, 99.2) << endl;
    return 0;
}
char min(char a, char b)
{
    return toupper(a) < toupper(b) ? a : b;
}
int min(int a, int b)
{
    return a<b ? a: b;
}
double min(double a, double b)
{
    return a<b? a: b;
}
