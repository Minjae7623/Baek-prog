#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;

    for (const string& s : picture)
    {
        string input = "";
        for (char c : s)
        {
            for (int i = 0; i < k; ++i)
            {
               input.push_back(c);
            }
        }

        for (int i = 0; i < k; ++i)
        {
            answer.push_back(input);

        }
    }

    return answer;
}