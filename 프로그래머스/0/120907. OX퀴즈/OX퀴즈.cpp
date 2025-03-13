#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer(quiz.size());

    for (int i = 0; i < quiz.size(); ++i)
    {
        int result = 0;

        stringstream ss(quiz[i]);
        char op;
        string num = "";//음수 표현 위해 str으로.
        op = '+';

        while (ss >> num)
        {
            if      ('+' == op) result += stoi(num);
            else if ('-' == op) result -= stoi(num);
            else if ('=' == op)
            {
                ss >> num;
                answer[i] = (result == stoi(num)) ? "O" : "X";
                break;
            }

            ss >> op;
        }
    }

    return answer;
}