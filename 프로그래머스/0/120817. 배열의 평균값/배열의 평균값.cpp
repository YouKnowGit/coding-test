#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for (int num : numbers) {
        answer += (double)num;
    }
    return answer / numbers.size();
}