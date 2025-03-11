#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer(my_string);

    answer.erase(remove_if(answer.begin(), answer.end()
        , [](char c) {return ('a' == c || 'e' == c || 'i' == c || 'o' == c || 'u' == c); })
        , answer.end());

    return answer;
}