#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    map<int, pair<bool, int>> rankMap;
    vector<int> result;
    result.reserve(3);

    for (int i = 0; i < rank.size(); ++i)
    {
        rankMap[rank[i]] = { attendance[i], i };
    }

    for (const auto& it : rankMap)
    {
        if (it.second.first)
        {
            result.push_back(it.second.second);
        }

        if (result.size() >= 3)
            break;
    }

    int answer = (result[0] * 10000) + (result[1] * 100) + result[2];
    return answer;
}