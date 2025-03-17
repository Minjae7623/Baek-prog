#include <string>
#include <vector>
#include <unordered_map>        

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    unordered_map<string, string> map;

    for (const auto& idPw : db)
    {
        map[idPw[0]] = idPw[1];
    }

    string answer = "";

    //id가 일치하는 경우
    if (map.find(id_pw[0]) != map.end())
    {
        //pw도 일치하는 경우
        if (map[id_pw[0]] == id_pw[1])
            return "login";

        //pw는 일치하지 않는 경우
        else
            return "wrong pw";
    }

    //id가 일치하지 않는 경우
    else
        return "fail";

    return answer;
}