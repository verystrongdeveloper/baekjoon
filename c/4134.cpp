#include <iostream>

using namespace std;

bool isPrime(long long k) {
    for(long long i = 2; i * i <= k; i++) {
        if(k % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while(n--) {
        long long k;
        cin >> k;
        if(k == 0 || k == 1) {
            cout << "2\n";
            continue;
        }
        while(1) {
            if(isPrime(k)) {
                cout << k << "\n";
                break;
            }
            k++;
        }
    }
    return 0;
}