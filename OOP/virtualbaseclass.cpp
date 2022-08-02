#include<iostream>
using namespace std;
class base{
public:
    int i;
};
class derived1:virtual public base
{
    public:
        int j;
};
class derived2:virtual public base
{
public :
    int k;
};
class derived3 : public derived1, public derived2
{
    public:
    int product()
    {
        return i*j*k;
    }
};
int main()
{
    derived3 obj;
    obj.i=10; obj.j=5; obj.k=5;
    cout <<"product is "<< obj.product() <<endl;
    return 0;
}








