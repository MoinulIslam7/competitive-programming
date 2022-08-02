#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,length;
    cin >> n;
    string str;
    for(int i=0;i<n; i++)
    {
        count=0;
        cin >> str;
        length=str.size();
        if(length>10)
        {
            for(int j=0; j<length; j++)
            {
                count++;
            }
            cout << str[0]<<count-2 << str[count-1] << endl;
        }
        else
            cout << str << endl;
    }
}
