#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    bool blocked[26] = {false};

    for (char c : skip) {
        blocked[c - 'a'] = true;
    }

    for (char& c : s) {
        int count = 0;
        int cur = c - 'a';

        // index만큼 이동
        while (count < index) {
            cur = (cur + 1) % 26;
            if (!blocked[cur]) {
                count++;
            }
        }

        c = cur + 'a';
    }

    return s;
}