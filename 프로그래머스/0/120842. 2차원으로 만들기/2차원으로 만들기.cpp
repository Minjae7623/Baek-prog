#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    int x = num_list.size() / n; 
    int y = n; 
    int k = 0; //num_list idx
    vector<vector<int>> answer(x, vector<int>(y, 0));

    for (int i = 0; i < x; ++i)
    {   
        for (int j = 0; j < y; ++j)
        {
            answer[i][j] = num_list[k++];
        }
    }

    return answer;
}