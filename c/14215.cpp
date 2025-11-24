#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int max_value = max(a, max(b, c));
    int sum_value = a + b + c - max_value; // 나머지 두 변의 합

    if(sum_value <= max_value) {
        cout << sum_value * 2 - 1; // 나머지 두 변의 합이 가장 긴 변의 길이보다 작거나 같을 때        
    }
    else {
        cout << sum_value + max_value;
    }
    return 0;
}