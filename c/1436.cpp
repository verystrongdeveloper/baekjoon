#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;
    int number = 666;

    while(true) {
        string s = to_string(number);
        if(s.find("666") != string::npos) {
            count++;
        }

        if(count == n) {
            cout << number;
            break;
        }

        number++;
    }

    return 0;
}