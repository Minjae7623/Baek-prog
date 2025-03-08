#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>

using namespace std;

//방장에게 보이는 관리자 창: "aaa님이 들어왔습니다.,"aaa님이 나갔습니다."
//닉네임 변경: 재입장 | 닉네임 변경 -> 기존 메시지 닉네임도 변경 
//닉네임 중복 가능
//결과: 마지막 닉네임으로 입장, 퇴장 메시지

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<string, string>> logs;
    unordered_map<string, string> nameMap;
    stringstream ss;
    string word = "";

    for (const string& log : record)
    {
        ss.str(log);
        string arr[3];
        int i = 0;
        fill(begin(arr), end(arr), "");

        //1. ss을 arr[3]에 받는다.
        while (ss >> word && i < 3)
        {
            arr[i++] = word;
        }

        //2. [0]명령어, [1]UID, [2]닉네임 1,2 매핑하고, 0,1 logs 저장.
        
        //닉네임이 변경되는 경우
        if ("Enter" == arr[0] || "Change" == arr[0])
        {
            nameMap[arr[1]] = arr[2];
        }

        //메시지에 기록해야하는 경우
        if ("Enter" == arr[0] || "Leave" == arr[0])
        {
            logs.push_back({ arr[0], arr[1] });
        }

        ss.clear();
    }

    //3. logs의 uid를 닉네임으로 변경한다.
    for (const auto& log2 : logs)
    {
        if ("Enter" == log2.first)
        {
            answer.push_back(nameMap[log2.second] + "님이 들어왔습니다.");
        }
        else
        {
            answer.push_back(nameMap[log2.second] + "님이 나갔습니다.");
        }
    }

    return answer;
}