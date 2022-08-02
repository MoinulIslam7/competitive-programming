
   #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    map<string,int> Map;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(Map[s]>=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        Map[s]++;
    }
}
