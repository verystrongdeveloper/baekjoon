#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;

    if(n == 1) {
        cout << 4;
    }
    else {
        cout << n * 4;
    }
    return 0;
}