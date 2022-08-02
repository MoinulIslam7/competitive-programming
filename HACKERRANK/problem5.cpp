#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cin >> a;
        cin >> b;
    n=a;
    if(n<=b && b<9)
    {
        if(n==1 || b==1)
            cout << "one"<< endl;
        if(n==2 || b==2)
            cout << "two"<< endl;
        if(n==3 || b==3)
            cout << "three" << endl;
        if(n==4 || b==4)
            cout << "four" << endl;
        if(n==5 || b==5)
            cout << "five" << endl;
        if(n==6 || b==6)
            cout << "six" << endl;
        if(n==7 || b==7)
            cout << "seven" << endl;
        if(n==8||b==8)
            cout << "eight"<< endl;
        if(n==9 || b==9)
            cout << "nine" <<endl;
    }
    if(n<=b && b>9)
    {
        if(n==1)
            cout << "one\ntwo\nthree\nfour\nfive\nsix\nseven\neight\nnine\n";
        else if(n==2)
            cout <<"two\nthree\nfour\nfive\nsix\nseven\neight\nnine\n";
        else if(n==3)
            cout <<"three\nfour\nfive\nsix\nseven\neight\nnine\n";
        else if(n==4)
            cout <<"four\nfive\nsix\nseven\neight\nnine\n";
        else if(n==5)
            cout << "five\nsix\nseven\neight\nnine\n";
        else if(n==6)
            cout << "six\nseven\neight\nnine\n";
        else if(n==7)
            cout << "seven\neight\nnine\n";
        else if(n==8)
            cout <<"eight\nnine\n";
        else if(n==9)
            cout <<"nine\n";
        for(int i=9+1; i<=b; i++)
        {
            if(i%2==0)
                cout << "even" <<endl;
            else
                cout << "odd"<< endl;
        }
    }
}
