#include<iostream>
using namespace std;
class myclass
{
    int a,b;
public:
    myclass(int x, int y);
    void show();
};
myclass :: myclass(int x, int y)
{
    cout << "constructor working " << endl;
    a=x; b=y;
}
void myclass :: show()
{
    cout << a << "   " <<b;
}
int main()
{
    int x, y;
    cout << "enter two number";
    cin >> x >> y;
     myclass obj(x,y);
    obj.show();
    return 0;
}
