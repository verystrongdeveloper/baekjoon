#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min_bags = 1e9;

    for (int i = 0; i * 5 <= n; i++) {
        int remaining = n - (i * 5); 
        if (remaining % 3 == 0) { 
            int total_bags = i + (remaining / 3);
            if (total_bags < min_bags) {
                min_bags = total_bags;
            }
        }
    }

    if (min_bags == 1e9) cout << -1;
    else cout << min_bags;

    return 0;
}
