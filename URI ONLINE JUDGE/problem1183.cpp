#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    double sum=0.0;
    int M[12][12];
    char T[2];
    int C,row,column;
    cin >> T;
    for(row=0;row<=11;row++)
    {
        for(column=0; column<=11; column++)
        {
        cin >> M[row][column];
        }
    }
    for(row=0; row<12; row++)
    {
        for(column=11; column<0; column--)
        {
            sum=sum+M[row][column];
        }
    }
    if(T[0]=='S')
        printf("\n%.1lf\n",sum);
    else if(T[0]=='M')
    {
            sum=sum/12.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}

