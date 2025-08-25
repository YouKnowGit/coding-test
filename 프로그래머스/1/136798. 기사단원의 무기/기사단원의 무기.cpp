#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> divcnt(number + 1, 0);
    
    for (int d = 1; d <= number; d++) {
        for (int k = d; k <= number; k += d) {
            divcnt[k]++;
        }
    }
    
    for (int i = 1; i <= number; i++) {
        int atk = divcnt[i];
        if (atk > limit) atk = power;
        answer += atk;
    }
    
    return answer;
}