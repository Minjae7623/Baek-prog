#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(string before, string after) {
    int answer = 1;
    unordered_map<char, int> map;
 
    for (int i = 0; i < before.size(); ++i)
    {
        ++map[before[i]];
        ++map[after[i]];
    }
 
    for (const auto& it : map)
    {
        if (it.second & 1) return 0;
    }

    return answer;
}