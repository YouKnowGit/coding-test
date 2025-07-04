#include <string>
#include <unordered_map>

using namespace std;

int solution(string s) {
    unordered_map<string, string> wordToDigit = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"},
        {"four", "4"}, {"five", "5"}, {"six", "6"},
        {"seven", "7"}, {"eight", "8"}, {"nine", "9"}
    };
    
    string answer = "";
    string temp = "";
    
    for (char c : s)
    {
        if (isdigit(c)) answer += c;
        else
        {
            temp += c;
            if (wordToDigit.count(temp))
            {
                answer += wordToDigit[temp];
                temp = "";
            }
        }
    }
    
    return stoi(answer);
}