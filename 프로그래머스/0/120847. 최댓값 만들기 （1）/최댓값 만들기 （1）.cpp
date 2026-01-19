#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max1 = 0, max2 = 0;
    
    for (int x : numbers)
    {
        if (x > max1)
        {
            max2 = max1;
            max1 = x;
        }
        else if (x > max2)
        {
            max2 = x;
        }
    }
    
    answer = max1*max2;
        
    return answer;
}