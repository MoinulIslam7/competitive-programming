#include <bits/stdc++.h>
using namespace std;
long long f[100050];
int cnt[100050];

int main()
{
    int n;
    cin >> n;
    int maxValue = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        cnt[temp]++;
        maxValue = max(maxValue, temp);
    }
    f[1] = cnt[1];
    for (int i = 2; i <= maxValue; i++)
        f[i] = max(f[i - 1], f[i - 2] + (long long)i * cnt[i]);

    cout << f[maxValue] << endl;
}
