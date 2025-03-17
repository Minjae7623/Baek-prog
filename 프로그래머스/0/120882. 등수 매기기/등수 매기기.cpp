#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());
    vector<pair<double, int>> avg; //average, idx
    avg.reserve(10);

    for (int i = 0; i < score.size(); ++i)
    {
        avg.push_back({ (double)(score[i][0] + score[i][1])/2.0, i});
    }

    sort(avg.begin(), avg.end(), [](const auto& a, const auto& b) {return a.first > b.first; });

    int rank = 0;
    int count = 0; //공동 등수
    for (int i = 0; i < avg.size(); ++i)
    {
        if (avg[0] != avg[i] && avg[i].first == avg[i - 1].first)
        {
            ++count;
        }
        else
        {
            ++rank += count;
            count = 0;
        }

        answer[avg[i].second] = rank;
    }

    return answer;
}