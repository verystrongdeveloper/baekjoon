#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++) {
        if(binary_search(a.begin(), a.end(), b[i])) {
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }
    return 0;
}