#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n + 1);
    vector<int> dp(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int k = 1; k <= i; k++) {
            dp[i] = max(dp[i], dp[i - k] + arr[k]);
        }
    }
    cout << dp[n];
    return 0;
}