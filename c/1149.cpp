#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(3));
    for(int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    for(int i = 1; i < n; i++) {
        v[i][0] += min(v[i - 1][1], v[i - 1][2]);
        v[i][1] += min(v[i - 1][0], v[i - 1][2]);
        v[i][2] += min(v[i - 1][0], v[i - 1][1]);
    }
    cout << min(v[n - 1][0], min(v[n - 1][1], v[n - 1][2]));
    return 0;
}