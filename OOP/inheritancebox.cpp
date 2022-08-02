#include<iostream>
#include<conio.h>
using namespace std;
class box
{
public:
    int l,w,h ;
    int show()
    {

    }
};
class area : public box
{
public:
    void volume()
    {
        cout<<"Enter three values "<<endl;
        l=10 ;
        w= 10;
        h=10;

        int A;
        A=l*w*h;
        return ;
    }
};

int main()
{
    int A;
    area ob;
    ob.show();
    ob.volume();
    cout<<"The volume is "<<A;
    getch();
}
