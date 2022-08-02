#include<iostream>
using namespace std;
class myclass
{
    double a,b,c;
public:
    myclass(int x,int y, int z);
    void show();
};
myclass :: myclass(int x, int y, int z)
{
    cout << "constructor in ";
    a=x; b=y; c=z;
}
void myclass :: show()
{
    cout << a << endl << b << endl << c;
    int s = a*b;
    int k = b*c;
    int j = a*c;
    cout << s <<" " << k << ' ' << j;
}
int main()
{
    myclass obj(4,5,6);
    obj.show();
    return 0;
}
