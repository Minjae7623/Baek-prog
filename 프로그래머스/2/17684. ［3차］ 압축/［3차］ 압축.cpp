#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// A~Z 사전 등록
// 입력 받은 문자열과 일치하는 가장 긴 문자열 찾기
// 해당 문자(c) + 다음 문자(c)를 사전에 등록

vector<int> solution(string msg) {
    unordered_map<string, int> mapDic;
    int count = 1;

    // A~Z 사전 등록
    for (; count <= 26; ++count)
    {
        string s(1, (char)(count + 64));
        mapDic[s] = count;
    }

    // 입력 받은 문자열과 일치하는 가장 긴 문자열 찾기
    vector<int> answer;
    for (int i = 0; i < msg.size(); ++i)
    {
        for (int j = msg.size(); j > i; --j)
        {
            string s = msg.substr(i, j - i);
            const auto& it = mapDic.find(s); 

            if (it != mapDic.end())
            {
                answer.push_back(it->second);
                
                //남은 글자가 있다면, 찾은 글자 + 다음 글자 사전 등록
                if (j < msg.size())
                {
                    mapDic[s + msg[j]] = count++;
                }

                i = j - 1;

                break;
            }
        }
    }

    return answer;
}