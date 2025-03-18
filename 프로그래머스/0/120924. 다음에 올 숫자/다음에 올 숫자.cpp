#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;


    if ((common[1] - common[0]) == (common[2] - common[1])) //등차
    {
        int d = common[1] - common[0];
        return common.back() + d;
    }

    else //등비
    {
        int r = common[1] / common[0];
        return common.back() * r;
    }

    return answer;
}