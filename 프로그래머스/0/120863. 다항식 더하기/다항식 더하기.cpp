#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    stringstream ss(polynomial);
    string num = "";
    char op = '+';
    int x = 0, constant = 0;

    while (ss >> num)
    {
        //상수 항
        if (num.find('x') == string::npos)
        {
            if ('+' == op)
                constant += stoi(num);
            else if ('*' == op)
                constant *= stoi(num);
        }

        //일차 항
        else
        {
            string tmp = "";
            if (1 < num.size())
            {
                for (char c : num)
                {
                    if (isdigit(c))
                        tmp += c;
                }
            }
            else
                tmp = "1";

            if ('+' == op)
                x += stoi(tmp);
            else if ('*' == op)
                x *= stoi(tmp);
        }

        ss >> op;
    }

    string answer = "";

    if(1 < x)       
        answer += to_string(x);

    if (1 <= x) //일차항이 있는 경우
    {
        answer += 'x';
        if (constant)    
            answer += " + " + to_string(constant); //일차항이 있으면서 상수항도 있는 경우
    }

    else        //상수항만 있는 경우
        answer += to_string(constant);

    return answer;
}
