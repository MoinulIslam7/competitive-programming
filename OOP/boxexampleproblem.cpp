#include<iostream>
using namespace std;
class box
{
    double l,w,h;
public:
    double volume;
    box(double x, double y, double z);
    void vol();
};
box :: box(double x, double y, double z)
{
    l=x; w=y; h=z;
};
void box :: vol()
{
    double volume;
    cout << "enter three side value to find the box volume ";
    cin >> l >> w >> h;
    volume = l*w*h;
    cout << " volume of box : " << volume << endl;
}
int main()
{
    box obj(1,1,1);
    obj.vol();
    return 0;
}
