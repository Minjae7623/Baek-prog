#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> count(progresses.size()); 
    
    int day = 1;
    int relIdx = -1;

    for (int i = 0; i < progresses.size(); )
    {
        //개발 진도가 100% 이상이라면 배포
        if (100 > progresses[i] + (speeds[i] * day))
        {
            while (100 > progresses[i] + (speeds[i] * day))
            {
                ++day;
            }
            ++relIdx;
        }

        ++count[relIdx];
        ++i;
    }

    vector<int> answer(count.begin(), count.begin() + relIdx + 1);

    return answer;
}