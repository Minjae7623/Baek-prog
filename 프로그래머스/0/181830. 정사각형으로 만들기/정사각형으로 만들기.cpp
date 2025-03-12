#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int mx = max(arr.size(), arr[0].size());
    vector<vector<int>> answer(mx, vector<int>(mx, 0));
    
    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = 0; j < arr[0].size(); ++j)
        {
            answer[i][j] = arr[i][j];
        }
    }

    return answer;
}
