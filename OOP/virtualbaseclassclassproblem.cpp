#include<iostream>
using namespace std;
class office
{
public:
    int table;
};
class home
{
public:
    int bed;
};
class house:public office,public home
{
public:
    int door,window;
    int attribute()
    {

        return door+window+table+bed;
    }
};
int main ()
{

    house obj;
    obj.door=1;
    obj.window=2;
    obj.table=3;
    obj.bed=4;
    cout<<"Product is="<<obj.attribute()<<endl;
    return 0;
}
