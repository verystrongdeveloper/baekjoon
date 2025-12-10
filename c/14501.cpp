#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> t(n);
    vector<int> p(n);
    for(int i = 0; i < n; i++) {
        cin >> t[i] >> p[i];
    }
    vector<int> dp(n + 1, 0);
    for(int i = 0; i < n; i++) {
        if(i + t[i] <= n) {
            dp[i + t[i]] = max(dp[i + t[i]], dp[i] + p[i]);
        }
        dp[i + 1] = max(dp[i + 1], dp[i]);
    }
    cout << dp[n];
    return 0;
}