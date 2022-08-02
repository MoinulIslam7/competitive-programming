#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    cout << "2\n";
    for(int i=1; i<1000; i++)
    {
        if(i%N==0)
        {
            cout <<i+2 << endl;
        }
    }
}
