#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    string temp = "";
    int answer;
    
    while (n > 0) {
        temp += to_string(n % 3);
        n /= 3;
    }
    
    int pow = 1;
    for (int i = temp.length() - 1; i >= 0; --i)
    {
        answer += (temp[i] - '0') * pow;
        pow *= 3;
    }
    
    return answer;
}