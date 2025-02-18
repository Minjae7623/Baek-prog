#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;

    //x > 0, 1 | 4
    if (dot[0] > 0)
    {
        answer = (dot[1] > 0) ? 1 : 4;
    }
    //x <= 0, 2 | 3
    else
    {
        answer = (dot[1] > 0) ? 2 : 3;
    }

    return answer;
}