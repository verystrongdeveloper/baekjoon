#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> trees(n);
    for(int i = 0; i < n; i++) {
        cin >> trees[i];
    }

    int gcdValue = trees[1] - trees[0];

    for(int i = 2; i < n; i++) {
        int distance = trees[i] - trees[i - 1];
        gcdValue = gcd(gcdValue, distance);
    }

    cout << (trees[n - 1] - trees[0]) / gcdValue - (n - 1);
    return 0;
}