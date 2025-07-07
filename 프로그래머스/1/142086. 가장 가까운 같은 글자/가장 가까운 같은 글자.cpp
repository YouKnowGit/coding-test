#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> lastIdx;
    
    for(int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        if (lastIdx.find(c) == lastIdx.end())
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(i - lastIdx[c]);
        }
        lastIdx[c] = i;
    }
    
    return answer;
}