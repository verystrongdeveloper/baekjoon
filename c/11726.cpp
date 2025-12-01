#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d[1001];
    int n;
    cin >> n;

    d[1] = 1;
    d[2] = 2;

    for(int i = 3; i <= n; i++) {
        d[i] = (d[i - 1] + d[i - 2]) % 10007;
    }

    cout << d[n];
    return 0;
}