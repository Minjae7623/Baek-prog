#include <string>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

int solution(string s) {
    stringstream ss(s);
    string token;
    stack<int> stack;

    while (ss >> token)
    {
        if (!stack.empty() && "Z" == token)
            stack.pop();

        else
        {
            stack.push(stoi(token));
        }
    }

    int answer = 0;
    while (!stack.empty())
    {
        answer += stack.top();
        stack.pop();
    }

    return answer;
}