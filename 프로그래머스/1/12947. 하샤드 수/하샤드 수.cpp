#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    for (int n = x; n > 0; n /= 10) {
        sum += n % 10;
    }
    return (x % sum == 0);
}