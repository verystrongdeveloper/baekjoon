#include <iostream>

using namespace std;

int dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c;
    cin >> c;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 5;
    for(int i = 5; i <= c; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }
    cout << dp[c];
    return 0;
}