#include <iostream>

using namespace std;

long long gcd(int a, int b) {
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
    long long a, b;
    cin >> a >> b;
    long long gcd_value = gcd(a, b);
    cout << a * b / gcd_value;
    return 0;
}