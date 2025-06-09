#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    int start = std::min(a, b);
    int end = std::max(a, b);
    
    long long answer = static_cast<long long>(start + end) * (end - start + 1) / 2;
    
    return answer;
}