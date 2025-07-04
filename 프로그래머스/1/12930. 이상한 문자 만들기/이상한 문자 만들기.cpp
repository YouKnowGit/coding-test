#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int idx = 0;
    
    for (char c : s)
    {
        if (c == ' ')
        {
            answer += ' ';
            idx = 0;
        }
        else
        {
            answer += (idx % 2 == 0) ? toupper(c) : tolower(c);
            ++idx;
        }
    }
    
    return answer;
}