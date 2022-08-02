#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        long long int ones=0,twos=0;
        char arr[n][n];
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                ones++;
            else
                twos++;
        }
        if(twos==1||twos==2)
        {
            cout<<"NO\n";
        }
        else
        {
            long long int x=1;
            cout << "YES" << endl;
            for(int i=0; i<n; i++)
            {
                x=1;
                for(int j=i; j<n; j++)
                {
                    if(i==j)
                    {
                        arr[i][j]='X';
                        continue;
                    }
                    if(s[i]=='1')
                    {
                        arr[i][j]='=';
                        arr[j][i]='=';
                    }
                    else
                    {
                        if(x==1&&s[j]=='2')
                        {
                            arr[i][j]='+';
                            arr[j][i]='-';
                            x=2;
                        }
                        else
                        {
                            arr[i][j]='-';
                            arr[j][i]='+';
                        }
                    }
                }
            }
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    cout<<arr[i][j];
                }
                cout<<"\n";
            }
        }
    }
}
