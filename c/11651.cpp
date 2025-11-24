#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({y, x});
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        cout << v[i].second << " " << v[i].first << "\n";
    }

    return 0;
}
