#include <string>
#include <vector>

using namespace std;

//한 칸씩
//좌표반전
//결과: 마지막 좌표

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2);
    int x = 0, y = 0;

    for (const string& key : keyinput)
    {
        if      ("left" == key && x > -(board[0] / 2))  --x;
        else if ("right" == key && x < board[0] / 2)    ++x;
        else if ("up" == key && y < board[1] / 2)       ++y;
        else if ("down" == key && y > -board[1] / 2)    --y;
    }

    answer[0] = x;
    answer[1] = y;

    return answer;
}