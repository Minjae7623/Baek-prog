#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string str = "";

    unordered_map <string, int> map =
    { {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}
    , {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9} };

    for (char c : numbers)
    {
        str += c;

        if (map.end() != map.find(str))
        {
            answer = answer * 10 + map[str];
            str = "";
        }
    }

    return answer;
}