#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int leng = my_str.size();
    int i = 0;

    while (i < leng)
    {
        answer.push_back(my_str.substr(i, n));
        i += n;
    }

    return answer;
}