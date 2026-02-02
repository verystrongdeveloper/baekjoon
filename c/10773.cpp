#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    stack<int> s;
    while(k--) {
        int x;
        cin >> x;
        if(x == 0) {
            s.pop();
        }
        else {
            s.push(x);
        }
    }
    int sum = 0;
    while(!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
    return 0;
}