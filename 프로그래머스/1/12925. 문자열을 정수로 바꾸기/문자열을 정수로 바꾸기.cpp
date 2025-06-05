#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int sign = (s[0] == '-') ? -1 : 1;
    int start = (s[0] == '+' || s[0] == '-') ? 1 : 0;
    
    for (int i = start; i < s.length(); ++i) {
        answer = answer * 10 + (s[i] - '0');
    }
    
    return answer * sign;
}