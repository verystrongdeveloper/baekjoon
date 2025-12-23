#include <iostream>
#include <vector>

using namespace std;
long long arr[1000000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    for(int i = 4; i <= 1000000; i++) {
        arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3]) % 1000000009;
    }

    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        cout << arr[n] << "\n";
    }
    return 0;
}