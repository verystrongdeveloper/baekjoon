#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<int> v(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> dp(n, 0);
    dp[0] = v[0];
    for(int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + v[i], v[i]);
    }
    cout << *max_element(dp.begin(), dp.end());
    return 0;
}