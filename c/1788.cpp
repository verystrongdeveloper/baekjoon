#include <iostream>

using namespace std;

long long dp[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int t;
    if (n < 0)
    {
        t = -n;
    }
    else
    {
        t = n;
    }
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= t; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000000;
    }
    // n이 음수인 경우
    if (n < 0)
    {
        if (n % 2 == 0)
        {
            cout << "-1\n";
            cout << abs(dp[t]) << "\n";
        }
        else
        {   
            cout << "1\n";
            cout << abs(dp[t]) << "\n";
        }
    }
    else if (n == 0)
    {
        cout << "0\n";
        cout << "0\n";
    }
    else
    {
        cout << "1\n";
        cout << dp[n] << "\n";
    }
    return 0;
}