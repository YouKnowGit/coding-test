#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> one = {1, 2, 3, 4, 5};
    vector<int> two = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> three = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> score(3, 0);
    
    for (int i = 0; i < answers.size(); ++i)
    {
        if (answers[i] == one[i % one.size()])      score[0]++;
        if (answers[i] == two[i % two.size()])      score[1]++;
        if (answers[i] == three[i % three.size()])  score[2]++;
    }
    
    int maxScore = *max_element(score.begin(), score.end());
    vector<int> result;
    
    for (int i = 0; i < 3; ++i)
    {
        if (score[i] == maxScore)
        {
            result.push_back(i + 1);
        }
    }
    
    return result;
}