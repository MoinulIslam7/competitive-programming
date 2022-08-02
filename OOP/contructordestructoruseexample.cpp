#include<iostream>
#include<ctime>
#include<conio.h>
using namespace std;
class timer
{
    clock_t start;
public:
    timer();
    ~timer();
};
timer :: timer()
{
    start = clock();
}
timer :: ~timer()
{
    clock_t end;
    end = clock();
    cout << "elapsed time : " << (end-start) / CLOCKS_PER_SEC << endl;
}
int main()
{
    timer obj;
    char c;
    cout << "enter a key by enter :";
    cin>> c;
    getch();
}
