#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = "I hate that ";
    string s1= "I love that ";

    if(n%2==0)
    {
        for(int i=1; i<n; i++)
        {
            if(i%2==0)
                cout << s1 ;
            else if(i%2!=0)
                cout << s;
        }
        cout << "I love it" << endl;
    }
    else if(n%2!=0)
    {
        for(int i=1; i<n; i++)
        {
            if(i%2==0)
                cout << s1 ;
            else if(i%2!=0)
                cout << s;
        }
        cout << "I hate it" << endl;
    }
}
