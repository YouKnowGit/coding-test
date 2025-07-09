#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a) {
        int exchanged = (n / a) * b;
        n = (n % a) + exchanged;
        answer += exchanged;
    }
        
    return answer;
}