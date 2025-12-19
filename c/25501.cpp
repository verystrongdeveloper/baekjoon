#include <iostream>
#include <string>

using namespace std;

int cnt = 0;

int isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;
    while(left < right) {
        if(s[left] != s[right]) {
            return 0;
        }
        left++;
        right--;
        cnt++;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cnt = 1;
        int result = isPalindrome(s);
        cout << result << " " << cnt << "\n";
    }
    return 0;
}