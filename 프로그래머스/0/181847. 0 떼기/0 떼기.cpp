#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    int i = 0;

    for (; i < n_str.size(); ++i)
    {
        if ('0' != n_str[i])
            break;
    }

    string answer(n_str.substr(i));

    return answer;
}