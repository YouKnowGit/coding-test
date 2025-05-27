#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int k = n / 2;  // 짝수 개수
    return k * (k + 1);
}