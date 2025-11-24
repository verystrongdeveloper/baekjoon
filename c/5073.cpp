#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    while(true) {
        int a, b, c;
        cin >> a >> b >> c;

        int max_value = max(a, max(b, c));
        int sum_value = a + b + c - max_value;
        if(a == 0 && b == 0 && c == 0) {
            break;
        }
        else if(a == b && b == c) {
            cout << "Equilateral" << "\n";
        }
        else if(sum_value <= max_value) {
            cout << "Invalid" << "\n";
        }
        else if(a == b || b == c || c == a) {
            cout << "Isosceles" << "\n";
        }
        else {
            cout << "Scalene" << "\n";
        }


    }

    return 0;
}