#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    vector<unordered_map<string, int>> courseMap(course.size()); //course만큼 각 order조합의 map.

    //nCr(orders[j].size() C course[i])

    for (int i = 0; i < orders.size(); ++i)
    {
        //map 조합을 위한 정렬
        sort(orders[i].begin(), orders[i].end());

        vector<bool> isSelect(orders[i].size(), false);

        for (int j = 0; j < course.size(); ++j)
        {
            if (course[j] > orders[i].size())
                break;

            for (int k = 0; k < course[j]; ++k)
            {
                isSelect[k] = true;
            }

            do
            {
                string combi = "";
                for (int l = 0; l < orders[i].size(); ++l)
                {
                    if (isSelect[l])
                        combi += orders[i][l];
                }

                courseMap[j][combi]++;
            } while (prev_permutation(isSelect.begin(), isSelect.end()));
        }
    }
   
    //count 높은순 내림차순, 높은 것, 동점은 함께 answer 추가.
    for (int i = 0; i < courseMap.size(); ++i)
    {
        vector<pair<string, int>> vec(courseMap[i].begin(), courseMap[i].end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {return a.second > b.second; });
        int max = vec[0].second;
        if (max < 2)
            break;

        for (int j = 0; j < vec.size(); ++j)
        {
            if (max > vec[j].second)
                break;
            answer.push_back(vec[j].first);
        }
    }   

    sort(answer.begin(), answer.end());

    return answer;
}