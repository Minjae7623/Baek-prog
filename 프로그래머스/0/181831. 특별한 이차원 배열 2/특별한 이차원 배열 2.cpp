#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1;
    int n = arr.size();

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < i + 1; ++j){
            if (arr[i][j] != arr[j][i])
                answer = 0;
        }
    }

    return answer;
}