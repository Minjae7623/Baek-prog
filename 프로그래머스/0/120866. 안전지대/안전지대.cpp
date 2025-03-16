#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//board 크기 복사 arr
//상하좌우,대각 총 8방향
//borad 1인 부분의 8방향을 arr에 1 체크
//결과: arr 0인 부분을 카운트

int solution(vector<vector<int>> board) {
    vector<vector<int>> arr(board);
    int dx[] = { 0,0,-1,1,-1,1,-1,1 }; //상, 하, 좌, 우, 좌상, 우상, 좌하, 우하
    int dy[] = { -1,1,0,0,-1,-1,1,1 }; 

    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board[0].size(); ++j)
        {
            if (board[i][j] == 1)
            {
                for (int k = 0; k < 8; ++k)
                {
                    int x = j;
                    int y = i;

                    x += dx[k];
                    y += dy[k];
                    
                    if (0 <= y && board.size() > y && 0 <= x && board[0].size() > x && 0 == arr[y][x])
                        arr[y][x] = 1;// 위험지대
                }
            }
        }
    }

    int answer = 0;

    for (const auto& row : arr)
    {
        answer += count(row.begin(), row.end(), 0);
    }

    return answer;
}
