#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));

    int num = 1;
    int x = 0, y = 0;
    int dx[] = {1,0,-1,0};
    int dy[] = { 0,1,0,-1 };
    int dir = 0;

    while (num <= n * n)
    {
        answer[y][x] = num++;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (0 > nx || n <= nx || 0 > ny || n <= ny || 0 != answer[ny][nx])
        {
            dir = (dir + 1) % 4; //경계 또는 지나온 길이라면 방향 전환.
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    return answer;
}