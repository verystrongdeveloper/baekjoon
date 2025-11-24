#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N; //미로 칸
    cin >> N;

    const int INF = 10001;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> dp(N, INF); //메모장
    dp[0] = 0; //0칸 까지는 0번 점프

    for (int i = 0; i < N; i++) {
        if (dp[i] == INF) continue;
        int jump_power = A[i];
        for (int j = 1; j <= jump_power; j++) {
            int next_stone = i + j;
            if(next_stone < N) {
                dp[next_stone] = min(dp[next_stone], dp[i] + 1);
            }
        }
    }

    if (dp[N - 1] == INF) cout << -1;
    else cout << dp[N - 1];
    return 0;
}