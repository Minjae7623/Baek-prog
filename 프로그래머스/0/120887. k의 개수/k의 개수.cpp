#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;

    for (int l = i; l <= j; ++l)
    {
        string s = to_string(l);
        answer += count(s.begin(), s.end(), k + '0');
    }

    return answer;
}