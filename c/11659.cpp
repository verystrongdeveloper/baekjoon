#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n + 1);
    arr[0] = 0;
    for(int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        arr[i] = arr[i - 1] + temp;
    }
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        cout << arr[b] - arr[a - 1] << "\n";
    }
    return 0;
}