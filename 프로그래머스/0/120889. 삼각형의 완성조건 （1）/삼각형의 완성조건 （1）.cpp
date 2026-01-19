#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    int max = *max_element(sides.begin(), sides.end());
    int sum = accumulate(sides.begin(), sides.end(), 0);
    
    answer = (max < sum - max) ? 1 : 2;
    
    return answer;
}