#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int target = n - 1;

    for (int x = 2; x * x <= target; ++x) {
        if (target % x == 0) {
            return x;
        }
    }

    return target;
}
