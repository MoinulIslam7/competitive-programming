#include<iostream>
#include<conio.h>
using namespace std;
class box
{
    int i,j,k;
    public:
        box(int m,int n, int p);
        void show();
};
    class area : public box
{
public:
    int volomn()
{
    m=i;
    n=j;
    p=k;
}
};
int area::volumn(int A)
{
    A = m*n*p;
    return A;
}
int main()
{
    int m,n,p;
    volumn obj;
    cout << obj.volumn();
    getch();
}
