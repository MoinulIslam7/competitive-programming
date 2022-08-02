#include<iostream>
using namespace std;
int main()
{
    int n;
    int x,y,z,count=0;
    cin >> n;
    int i,j;
    for(i=0; i<n ; i++)
    {
        cin >> x >> y >> z;

        if(x==1 && y==1)
            count++;
        else if(x==1 && z==1)
            count++;
        else if(y==1 && z==1)
            count++;
        else if(x==1 && y==1 && z==1)
            count++;
    }
    cout << count << endl;
}
