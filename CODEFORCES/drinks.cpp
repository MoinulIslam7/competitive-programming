#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[101];
    double sum =0, sum1=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    sum1 = sum / 100;

    printf("%.12lf", (sum1 / n)*100);
}
