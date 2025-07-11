#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int month_days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    string week_days[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};

    int total_days = 0;

    for (int i = 0; i < a - 1; ++i) {
        total_days += month_days[i];
    }

    total_days += b - 1;

    return week_days[total_days % 7];
}