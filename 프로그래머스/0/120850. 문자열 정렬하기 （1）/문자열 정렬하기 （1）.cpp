#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;

    for (char c : my_string)
    {
        int a = c - '0';
        if (0 <= a && 9 >= a)
            answer.push_back(a);
    }

    sort(answer.begin(), answer.end());

    return answer;
}