#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> dp(n);
    for(int i = 0; i < n; i++) {
        dp[i] = v[i];
        for(int j = 0; j < i; j++) {
            if(v[j] < v[i]) {
                dp[i] = max(dp[i], dp[j] + v[i]);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end());
    return 0;
}