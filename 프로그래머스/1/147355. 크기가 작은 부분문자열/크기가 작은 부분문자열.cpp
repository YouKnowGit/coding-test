#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long p_num = stoll(p);
    int len = p.size();
    
    for (int i = 0; i <= (int)t.size() - len; ++i)
    {
        string sub = t.substr(i, len);
        long long sub_num = stoll(sub);
        if (sub_num <= p_num) answer++;
    }
    return answer;
}