#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec;

    while (vec.size() < n)
    {
        ++answer;

        if (answer % 3 != 0 && to_string(answer).find("3") == string::npos)
            vec.push_back(answer);
    }

    return answer;
}