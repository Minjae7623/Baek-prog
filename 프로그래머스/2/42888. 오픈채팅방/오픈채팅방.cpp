#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;
//개선

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<string, string>> logs;
    unordered_map<string, string> nameMap;

    for (const string& log : record)
    {
        stringstream ss(log);
        string cmd, ID, nickName;
        ss >> cmd >> ID >> nickName;

        //닉네임이 변경되는 경우
        if ("Enter" == cmd || "Change" == cmd) { nameMap[ID] = nickName; }

        //메시지에 기록해야하는 경우
        if ("Enter" == cmd || "Leave" == cmd) { logs.push_back({ cmd, ID }); ; }
    }

    for (const auto& log2 : logs)
    {
        string msg = nameMap[log2.second] + "님이 ";
        msg += (log2.first == "Enter") ? "들어왔습니다." : "나갔습니다.";
        answer.push_back(msg);
    }

    return answer;
}