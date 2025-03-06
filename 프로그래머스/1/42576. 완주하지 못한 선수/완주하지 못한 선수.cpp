#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map <string, int> mapNames;

    for (const string& name : completion)
    {
        ++mapNames[name];
    }

    for (const string& name : participant)
    {
        --mapNames[name];

        if (0 > mapNames[name])
            return name;
    }

    return "";
}