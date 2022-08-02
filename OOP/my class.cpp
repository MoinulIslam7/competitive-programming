#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public :
        int id;
        double gpa;
        void display(){
            cout<< id<< "   " << gpa;

        }
};

int main(){
    student alim;
    alim.id = 3;
    alim.gpa = 4.205;
    alim.display( );

    cout << endl;
    student lim;
    lim.id = 67;
    lim.gpa = 4.25;
    lim.display();
    cout << endl;
    getch();
}
