#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if (!(cin >> T)) return 0;

    cout.setf(ios::fixed);
    cout << setprecision(3);

    while (T--) {
        int N; 
        cin >> N;
        vector<int> a(N);
        long long sum = 0;

        for (int i = 0; i < N; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        double avg = static_cast<double>(sum) / N;

        int cnt = 0;
        for (int x : a) if (x > avg) ++cnt;

        double percent = (static_cast<double>(cnt) * 100.0) / N;
        cout << percent << "%\n";
    }
    return 0;
}
