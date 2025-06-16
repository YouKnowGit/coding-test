#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int len = phone_number.length();
    string answer(len - 4, '*');
    answer += phone_number.substr(len - 4);
    return answer;
}