#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer(my_string);

    for (auto it = answer.begin(); it != answer.end(); )
    {
        switch (*it)
        {
        case 'a':case 'e':case 'i':case 'o':case 'u':
            answer.erase(it);
            break;
        default:
            ++it;
            break;
        }
    }

    return answer;
}