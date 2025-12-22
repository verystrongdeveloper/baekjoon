#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 0) {
        cout << "1" << endl;
        return 0;
    }

    long long current_height;
    cin >> current_height;
    for(int i = 1; i < n; i++) {
        long long next_num;
        cin >> next_num;

        if(next_num > current_height) {
            current_height = next_num;
        } else {
            cout << "0" << endl;
            return 0;
        }
    }
    cout << "1" << endl;
    return 0;
}