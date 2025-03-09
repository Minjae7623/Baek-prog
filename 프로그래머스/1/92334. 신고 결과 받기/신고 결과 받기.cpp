#include <string>
#include <sstream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

//1인 n명 신고 가능, 동일 신고자의 동일 유저 신고 -> 한 번으로 처리.
//k번 이상 신고된 a유저 -> 정지
//a유저 신고한 사람들에게 메일 알림 
//결과: 메일 받은 횟수, 내가 신고한 유저가 k번 이상 신고 되었는가

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;

    //report 중복제거
    unordered_set<string> uniqueReport(report.begin(), report.end());

    unordered_map<string, int> reportedUser;
    vector<pair<string, string>> pairUser;
    unordered_set<string> banned;

    //정지 받은 유저 색출
    for (const string& log : uniqueReport)
    {
        stringstream ss(log);
        string ID, rID;
        ss >> ID >> rID;

        ++reportedUser[rID];

        pairUser.push_back({ ID,rID });

        if (k <= reportedUser[rID])
        {
            banned.insert(rID);
        }
    }

    unordered_map<string, int> reportingUser;

    //벤 유저를 신고한 유저
    for (const string& user : banned)
    {
        for (int i = 0; i < pairUser.size(); ++i)
        {
            if (user == pairUser[i].second)
            {
                ++reportingUser[pairUser[i].first];
            }
        }
    }

    for (const string& user : id_list)
    {
        answer.push_back(reportingUser[user]);
    }

    return answer;
}