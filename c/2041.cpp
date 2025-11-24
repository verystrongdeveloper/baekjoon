#include <iostream>
#include <vector>
using namespace std;

void fillDiagonalMatrix(int n, int m) {
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    int num = 1;
    
    // 첫 행에서 시작하는 대각선들
    for (int col = 0; col < m; ++col) {
        int r = 0, c = col;
        while (r < n && c >= 0) {
            matrix[r][c] = num++;
            r++;
            c--;
        }
    }
    
    // 첫 열에서 시작하는 대각선들
    for (int row = 1; row < n; ++row) {
        int r = row, c = m - 1;
        while (r < n && c >= 0) {
            matrix[r][c] = num++;
            r++;
            c--;
        }
    }
    
    // 결과 출력
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    fillDiagonalMatrix(n, m);
    return 0;
}
