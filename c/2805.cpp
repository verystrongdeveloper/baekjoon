#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long m;
    cin >> n >> m;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long left = 0;
    long long right = *max_element(arr.begin(), arr.end());
    long long result = 0;

    while(left <= right) {
        long long mid = (left + right) / 2; 
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] > mid) sum += arr[i] - mid;
        }
        if(sum >= m) {
            left = mid + 1;
            result = mid;
        }
        else right = mid - 1;
    }
    cout << result;
    return 0;
}