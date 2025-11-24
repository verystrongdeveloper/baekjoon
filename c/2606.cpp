#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<int> friends[101];
bool visited[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        friends[a].push_back(b);
        friends[b].push_back(a);
    }

    queue<int> q;

    q.push(1);
    visited[1] = true;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < friends[cur].size(); i++) {
            int next_friend = friends[cur][i];

            if(visited[next_friend] == false) {
                visited[next_friend] = true;

                q.push(next_friend);
            }
        }
    }

    int total_count = 0;

    for(int i = 1; i <= n; i++) {
        if(visited[i] == true) {
            total_count++;
        }
    }

    cout << total_count - 1 << endl;
    return 0;
}