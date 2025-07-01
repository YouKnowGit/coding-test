#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_w = 0;
    int max_h = 0;
    
    for (auto& size : sizes) {
        int w = max(size[0], size[1]);
        int h = min(size[0], size[1]);

        if (w > max_w) max_w = w;
        if (h > max_h) max_h = h;
    }
    
    return max_w * max_h;
}