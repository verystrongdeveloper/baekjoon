#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a <= c && d * a + b <= d * c) {
        cout << "1";
    }
    else {
        cout << "0";
    }
    return 0;
}