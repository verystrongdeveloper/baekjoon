#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long dp[91];
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 3;
    for(int i = 5; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n];
    return 0;
}