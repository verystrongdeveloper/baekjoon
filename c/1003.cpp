#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    int memo[41][2];
    
    memo[0][0] = 1;
    memo[0][1] = 0;
    memo[1][0] = 0;
    memo[1][1] = 1;

    for(int i = 2; i <= 40; i++) {
        memo[i][0] = memo[i - 1][0] + memo[i - 2][0];
        memo[i][1] = memo[i - 1][1] + memo[i - 2][1];
    }

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        cout << memo[k][0] << " " << memo[k][1] << "\n";
    }

    return 0;
}