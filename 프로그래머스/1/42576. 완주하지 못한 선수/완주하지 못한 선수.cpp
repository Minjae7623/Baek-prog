#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map <string, int> mapNames;

    for (string name : participant)
    {
        ++mapNames[name];
    }

    for (string delName : completion)
    {
        --mapNames[delName];
    }

    for (auto iter : mapNames)
    {
        if (1 == iter.second)
            return iter.first;
    }

    return "";
}