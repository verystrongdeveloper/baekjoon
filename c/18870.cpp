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
    vector<int> v_sorted(v);
    sort(v_sorted.begin(), v_sorted.end());
    auto it = unique(v_sorted.begin(), v_sorted.end());
    v_sorted.erase(it, v_sorted.end());
    for(int i = 0; i < n; i++) {
        auto pos = lower_bound(v_sorted.begin(), v_sorted.end(), v[i]);
        cout << pos - v_sorted.begin() << " ";
    }
    return 0;
}