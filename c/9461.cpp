#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long dp[101];
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;
    dp[6] = 3;
    dp[7] = 4;
    dp[8] = 5;
    dp[9] = 7;
    dp[10] = 9;
    for(int i = 11; i <= 100; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
        //dp[i] = dp[i -2] + dp[i - 3] 도 가능
    }
    int n;
    cin >> n;
    while(n--) {
        int k;
        cin >> k;
        cout << dp[k] << "\n";
    }
    return 0;
}  