#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> x_vector(n);
    vector<int> y_vector(n);

    int min_x = 10000;
    int max_x = -10000;
    int min_y = 10000;
    int max_y = -10000;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        x_vector[i] = x;
        y_vector[i] = y;
        min_x = min(min_x, x);
        max_x = max(max_x, x);
        min_y = min(min_y, y);
        max_y = max(max_y, y);
    }

    cout << (max_x - min_x) * (max_y - min_y);
    return 0;
}