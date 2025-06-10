#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long n = num;
    
    for (int i = 0; i < 500; ++i) 
    {
        if (n == 1) return i;  
        n = ((n & 1) == 0) ? (n / 2) : (n * 3 + 1);
    }
    
    return -1;
}