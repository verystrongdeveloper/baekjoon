#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, w, h;
    cin >> x >> y >> w >> h;
    vector<int> v = {x, y, w - x, h - y};
    sort(v.begin(), v.end());
    cout << v[0];
    return 0;
}