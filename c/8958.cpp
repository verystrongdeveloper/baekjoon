#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int score = 0;
        int count = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'O') {
                count++;
                score += count;
            } else {
                count = 0;
            }
        }
        cout << score << endl;
        score = 0;
        count = 0;
    }
    return 0;
}