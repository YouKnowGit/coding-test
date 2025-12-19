#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    int min_press[26] = {0, };

    for (const string& keys : keymap) {
        for (int i = 0; i < keys.length(); ++i) {
            int char_idx = keys[i] - 'A';
            int press_count = i + 1;

            if (min_press[char_idx] == 0 || press_count < min_press[char_idx]) {
                min_press[char_idx] = press_count;
            }
        }
    }

    vector<int> answer;
    answer.reserve(targets.size());

    for (const string& target : targets) {
        int total_press = 0;
        bool is_possible = true;

        for (char c : target) {
            int cost = min_press[c - 'A'];
            
            if (cost == 0) {
                is_possible = false;
                break;
            }
            total_press += cost;
        }

        answer.push_back(is_possible ? total_press : -1);
    }

    return answer;
}