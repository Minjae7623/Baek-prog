#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for (char c : my_string)
    {
        answer += (c < 97) ? c + 32 : c - 32;
    }

    return answer;
}