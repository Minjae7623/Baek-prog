#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    int rLeng = board.size();
    int cLeng = board[0].size();

    for (int i = 0; i < rLeng; ++i) {
        for (int j = 0; j < cLeng; ++j) {
            if ((i + j) <= k) {
                answer += board[i][j];
            }
        }
    }

    return answer;
}