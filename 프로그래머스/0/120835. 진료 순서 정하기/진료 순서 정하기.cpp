#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    int leng = emergency.size();
    vector<int> answer(leng);
    int max = 0;
    int k = 0;
    int prioty = 0;

    for (int i = 0; i < leng; ++i)
    {
        for (int j = 0; j < leng; ++j)
        {
            if (max < emergency[j])
                max = emergency[j];
            
        }

        for (k = 0; k < leng; ++k)
        {
            if (max == emergency[k])
            {
                emergency[k] = 0;
                max = 0;
                break;
            }
        }
        answer[k] = ++prioty;
    }

    return answer;
}