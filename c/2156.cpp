#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[10001];
    int dp[10001];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    dp[0] = arr[0];

    if(n >= 2) {
        dp[1] = arr[0] + arr[1];
    }
    for(int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]));
    }

    cout << dp[n - 1];
    return 0;
}