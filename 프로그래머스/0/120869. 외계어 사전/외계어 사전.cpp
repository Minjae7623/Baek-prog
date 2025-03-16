#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 1;

    for (string word : dic)
    {
        if (word.find(spell[0]) != string::npos)
        {
            answer = 1;
            for (int i = 1; i < spell.size(); ++i)
            {
                if (word.find(spell[i]) == string::npos) //없다면
                {
                    answer = 2;
                    break;
                }
            }
            if (1 == answer) return answer; //spell의 모든 원소 사용.
        }
        else
            answer = 2;
    }

    return answer;
}