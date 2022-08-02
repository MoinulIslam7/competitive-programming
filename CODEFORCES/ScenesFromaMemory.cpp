#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
int isnotprime(char n)
{
    int count =0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count>1)
        return 1;
    else
        return 0;
}
void Composite()
{
    int k,num,prime;
    cin >> k;
    char str[k];
    cin >> str;
    num = std::atoi(str);
    sort(str,str+k);
    for(int i=0; i<k; i++)
    {
        if(str[i]==1)
        {
            cout << "1" << endl;
            break;
        }
        else if(isnotprime(str[i])==1)
        {
            cout << prime<< endl;
            break;
        }
        else if(isnotprime(str[i])==0)
        {
           int num = str[i] * 10 + str[i+1];
           if(isnotprime(num)==1)
           {
              cout << num << endl;
              break;
           }
        }
    }

}
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        Composite();
    }
}
