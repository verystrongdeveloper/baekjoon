#include <iostream>
using namespace std;

int dp[1001][10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i <= 9; i++) {
        dp[1][i] = 1; 
    }

    for (int i =2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            for(int k = 0; k <= j; k++) {
                dp[i][j] += dp[i - 1][k];
                dp[i][j] %= 10007;
            }
        }
    }

    int answer = 0;
    for(int i = 0; i <= 9; i++) {
        answer = answer + dp[n][i];
    }
    cout << answer % 10007;
    return 0;
}