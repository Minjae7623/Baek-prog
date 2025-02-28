#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    int answer = 1;
    stack<char> stack;

    for (char c : s)
    {
        if (stack.empty()) { stack.push(c); }

        else
        {
            if (c == stack.top()) { stack.pop(); }
            else { stack.push(c); }
        }
    }

    answer = (stack.empty());

    return answer;
}