#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    int leng = prices.size();
    vector<int> answer(leng, 0);

    //pair stack, price:idx
    stack<pair<int, int>> stack;

    //미만의 값이 나오면 새로운 idx - 기존 idx 
    for (int i = 0; i < leng; ++i)
    {
        if (stack.empty() || prices[i] >= stack.top().first)
            stack.push({ prices[i], i });

        else 
        {
            while (prices[i] < stack.top().first)
            {
                answer[stack.top().second] = i - stack.top().second;
                stack.pop();
                if (stack.empty())
                    break;
            }
            stack.push({ prices[i], i });
        }
    }

    while (!stack.empty())
    {
        answer[stack.top().second] = (leng - 1) - stack.top().second;
        stack.pop();
    }

    return answer;
}