#include<iostream>
#include<conio.h>
using namespace std;
inline int even(int x)
    {
        return !(x%2);
    }

int main()
{
    int x;
    cout << " enter a number to find a even number :";
    cin >> x;
    if(even(x))
        cout << x << " is even number "<< endl;
        else
            cout << "odd number";

    getch();
}
