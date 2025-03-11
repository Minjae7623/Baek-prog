#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    unordered_map<char, int> map;

    for (char c : s)
    {
        ++map[c];
    }
    
    for (auto it : map)
    {
        if (it.second == 1)
            answer += it.first;
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}