#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    //A행, A열==B행, B열
    size_t ar      = arr1.size();
    size_t acBr    = arr2.size();
    size_t bc      = arr2[0].size();

    for (int i = 0; i < ar; ++i)
    {
        vector<int> sums;
        for (int j = 0; j < bc; ++j)
        {
            int sum = 0;
            for (int k = 0; k < acBr; ++k)
            {
                sum += (arr1[i][k] * arr2[k][j]);
            }
            sums.push_back(sum);
        }
        answer.push_back(sums);
    }

    return answer;
}