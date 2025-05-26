#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    if (0 < angle && angle < 90)         return 1;       // 예각
    else if (angle == 90)       return 2;       // 직각
    else if (90 < angle && angle < 180)  return 3;       // 둔각
    else if (angle == 180)      return 4;       // 평각
}