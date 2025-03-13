#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string s = "";

    for (int i = my_string.size()-1; i>=0; --i)
    {
        char c = my_string[i];

        if (isdigit(c))
        {
            s = c + s;
        }
       
        if ('+' == c)
        {
            answer += stoi(s);
            s.clear();
        }
        else if('-' == c)
        {
            answer -= stoi(s);
            s.clear();
        }
    }

    return answer + stoi(s);
}