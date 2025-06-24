#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long totalCost = (long long)price * count * (count + 1) / 2;
    long long shortfall = totalCost - money;
    return shortfall > 0 ? shortfall : 0;
}