#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y,radius=0,PI=3.1416;
    cin >> x >> y;
    if(x<0 || y<0)
        return -1;
    radius = x*x*(PI/y);
    cout << radius;
}
