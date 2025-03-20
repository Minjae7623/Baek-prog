#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> num(201, 0);

    for (int i = 0; i < 3; ++i)
    {
        for (int j = lines[i][0] + 100; j < lines[i][1] + 100; ++j)
        {
            ++num[j];
        }
    }

    for (int n : num)
    {
        if (n >= 2)
            ++answer;
    }

    return answer;
}