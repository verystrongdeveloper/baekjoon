#include <iostream>
#include <string> // 문자열 도구
#include <stack>  // "접시통" 도구!

using namespace std;

int main() {
    int T; // 테스트 케이스 개수
    cin >> T;

    // T번 만큼 반복
    for (int i = 0; i < T; ++i) {
        
        string ps; // 괄호 문자열 입력
        cin >> ps;

        // 1. 매번 새로운 "빈 접시통"을 준비
        stack<char> s; 

        bool is_vps = true; // "일단 YES라고 가정" 스위치

        // 2. 문자열 한 글자씩 확인
        for (char c : ps) {
            
            if (c == '(') {
                // 3. ( 괄호 = 접시 쌓기
                s.push(c); // 접시통에 '(' 문자를 넣는다
            } 
            else if (c == ')') {
                // 4. ) 괄호 = 접시 빼기 시도
                
                if (s.empty()) { // s.empty()가 true인가? (접시통이 비었나?)
                    // "실패 1: 뺄 접시(짝꿍)가 없어요!"
                    is_vps = false; // "NO"라고 표시
                    break; // 더 이상 검사할 필요 없음
                } 
                else {
                    // 접시통이 비어있지 않으면, 짝을 맞춘다
                    s.pop(); // 맨 위 접시('(')를 뺀다
                }
            }
        }

        // 5. 문자열 검사 끝! 남은 접시 확인
        
        // "실패 2: 짝 못 맞춘 ( 접시가 남아돌아요!"
        if (!s.empty()) { // !s.empty() = "스택이 비어있지 않다면?"
            is_vps = false; // "NO"라고 표시
        }

        // 6. 최종 판정
        if (is_vps) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}