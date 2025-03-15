#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    vector<int> x(4);
    vector<int> y(4);

    for (int i = 0; i < 4; ++i)
    {
        x[i] = dots[i][0];
        y[i] = dots[i][1];
    }

    int width   = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
    int height  = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
    int answer  = width * height;

    return answer;
}