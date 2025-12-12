#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x = s[0];
    int cntX = 0, cntOther = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == x) cntX++;
        else cntOther++;

        if (cntX == cntOther) {
            answer++;
            if (i + 1 < s.size()) {
                x = s[i + 1];
            }
            cntX = 0;
            cntOther = 0;
        }
    }

    if (cntX != 0 || cntOther != 0) answer++;

    return answer;
}