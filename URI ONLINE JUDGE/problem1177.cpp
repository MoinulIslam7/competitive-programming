#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double t, a=0;
    float N[100];
    cin >> t;
    for(int i=0; i<100; i++)
    {

        printf("N[%d] = %.4lf\n",i,t);
        t= t/2;

    }
    return 0;
}
