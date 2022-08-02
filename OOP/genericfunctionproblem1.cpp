#include<iostream>
using namespace std;
template<class x>void swapargs(x &a, x &b)
{
    x temp;
     temp = a;
    a = b;
    b = temp;
}
int main()
{
    int i=10;
    int j=20;
    float x=10, y=23.3;
    cout << "original i,j : " << i << " " << j <<endl;
    cout << "original x, y : " << x << " " << y << endl;
    swapargs(i, j);
    swapargs(x, y);
    cout << "swapped i, j : " << i << " " << j << endl;
    cout << "swapped x, y : " << x << " " << y << endl;
    return 0;
}
