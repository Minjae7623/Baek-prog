#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for (char c : my_string)
    {
        if (string::npos == answer.find(c))
        {
            answer += c;
        }
    }

    return answer;
}