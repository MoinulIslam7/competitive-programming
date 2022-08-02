#include<iostream>
#include<conio.h>
using namespace std;
void date(char *date);
void date(int day, int year);
int main()
{
    date(*8/12/99*);
    date(8, 12, 99);
    return 0;
}
void date(char *date)
{
    cout << "date :"<< date << endl;
}
void date(unt month , int day, int year)
{
    cout << "date :"<< month << endl;
    cout << day << "/ " << year << endl;
}
