#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, b;
    cin >> n >> b;
    string result = "";

    while (n > 0) {
        int remainder = n % b;
        if (remainder >= 10) {
            result = char(remainder - 10 + 'A') + result;
        } else {
            result = char(remainder + '0') + result;
        }
        n /= b;
    }
    cout << result;
    return 0;
}