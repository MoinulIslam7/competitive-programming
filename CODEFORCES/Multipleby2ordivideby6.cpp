#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,count=0;
        cin >> n;
        while(1)
        {
            if(n<2)
            {
                count =0;
                break;
            }
            if(n%6!=0)
            {
                n*=2;
                count++;
            }
            else if(n%6==0)
            {
                n/=6;
                count++;
            }

            if(n==1 || n<=0)
                break;
        }
        if(n==1)
            cout << count << endl;
        else
            cout << "-1" << endl;
    }
}
