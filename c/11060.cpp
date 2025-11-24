#include <iostream>
#include <vector>     // 배열(돌다리)을 쉽게 만들게 해주는 도구
#include <algorithm>  // min() 함수 (둘 중 더 작은 값 고르는 도구)

using namespace std;

// "절대 도달 못함"을 의미하는 아주 큰 숫자 (infinity)
// N이 1000까지니까 1001만 넘으면 돼요. 넉넉하게 10001!
const int INF = 10001;

int main() {
    int N; // 돌의 개수
    cin >> N;

    // 1. 돌다리(A)와 메모장(dp) 만들기

    // A: 각 돌의 점프력을 저장할 배열 (크기 N)
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i]; // 각 돌의 점프력 입력받기
    }

    // dp: 우리들의 "똑똑한 메모장" (크기 N)
    // 모든 칸을 "아직 못 감" (INF)으로 초기화
    vector<int> dp(N, INF);

    // 2. 시작점 설정
    // 0번 돌(시작점)까지는 0번 점프로 갈 수 있음
    dp[0] = 0;

    // 3. 점프 시작! (모든 돌을 0번부터 N-1번까지 확인)
    for (int i = 0; i < N; ++i) {
        
        // 만약 i번 돌이 "아직 못 감"(INF) 상태라면?
        // -> 여긴 어차피 못 오는 곳이니, 여기서 점프 시도도 할 필요 없음!
        if (dp[i] == INF) {
            continue; // 다음 돌(i+1)로 넘어가자
        }

        // i번 돌에 올 수 있었다면, 점프를 시도해보자!
        int jump_power = A[i]; // 현재 돌의 점프력

        // 1칸 점프부터 ~ 'jump_power'칸 점프까지 모두 시도
        for (int j = 1; j <= jump_power; ++j) {
            
            int next_stone = i + j; // 점프해서 도착할 돌의 위치

            // 중요: 돌다리(N) 밖으로 점프하면 안 됨!
            if (next_stone < N) {
                
                // [새로운 경로] = [지금까지 온 점프 횟수(dp[i])] + [이번 점프(1)]
                int new_cost = dp[i] + 1;

                // [기존 경로(dp[next_stone])] vs [새로운 경로(new_cost)]
                // 둘 중에 더 작은 값(최소 횟수)을 메모장에 저장!
                dp[next_stone] = min(dp[next_stone], new_cost);
            }
        }
    }

    // 4. 결과 확인
    // 맨 마지막 돌(N-1)의 메모장(dp) 값을 확인
    if (dp[N - 1] == INF) {
        // 아직도 "아직 못 감" 상태면, 도착 못한 것!
        cout << -1 << endl;
    } else {
        // 숫자가 적혀있다면, 그게 최소 점프 횟수!
        cout << dp[N - 1] << endl;
    }

    return 0;
}