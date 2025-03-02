#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    
    int n = board.size();
    int movSize = moves.size();

    //board 각 열의 높이
    vector<int> height(n, 0); //board row

    for (int col = 0; col < n; ++col)
    {
        for (int low = 0; low < n; ++low)
        {
            if (board[low][col] != 0)
            {
                height[col] = low;
                break;
            }
        }
    }

    // move - 1 -> board column idx 
    // pick = board[height[move[i-1]]][move[i-1]]
    // board[height[move[i-1]]][move[i-1]] = 0
    // stack.top() == pick -> pop()

    stack<int> stack;
    int pick = 0, answer = 0;

    for (int col : moves)
    {
        col -= 1;
        //인형이 없지 않다면,
        if (n > height[col])
        {
            pick = board[height[col]][col];
            board[height[col]++][col] = 0;

            if (stack.empty() || pick != stack.top()) {
                stack.push(pick); 
            }
            else 
            {
                stack.pop();
                ++answer;
            }
        }
    }

    return answer * 2;
}