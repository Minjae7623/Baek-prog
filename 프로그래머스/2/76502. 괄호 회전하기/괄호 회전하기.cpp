#include <string>
#include <stack>
#include <unordered_map>

//괄호 짝이 맞으면 올바른 괄호
//s.size() 만큼 왼쪽으로 이동시키는 과정 중 올바른 괄호는 몇 번인가

using namespace std;

int solution(string s) {
    unordered_map<char, char> pair = { { '[',']' }, { '{','}' }, { '(',')' } };
    int answer = 0;
    int sLeng = s.size();

    if (1 >= sLeng)
        return 0;

    //s.size() 만큼 반복, s를 왼쪽으로 배열 순회.
    for (int i = 0; i < sLeng; ++i)
    {
        int j = i;
        bool isPairCheck = true;

        stack<char> stack;
        int loop = sLeng;

        while (loop--)
        {
            //괄호 체크 
            char op = s[j++ % sLeng];

            if ('[' == op || '{' == op || '(' == op) { stack.push(op); }
            else
            {
                if (stack.empty())
                {
                    isPairCheck = false;
                    break;
                }
                else
                {
                    if (op != pair.find(stack.top())->second)
                    {
                        isPairCheck = false;
                        break;
                    }
                    //올바른 괄호라면
                    stack.pop();
                }

            }
        }

        if (stack.empty() && isPairCheck) { ++answer; }
    }

    //괄호 이동

    return answer;

}