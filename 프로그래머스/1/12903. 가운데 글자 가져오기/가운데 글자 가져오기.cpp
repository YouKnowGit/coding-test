#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int len = s.length();
    int mid = len >> 1;
    return s.substr(mid - (len & 1 ^ 1), 1 + (len & 1 ^ 1));
}