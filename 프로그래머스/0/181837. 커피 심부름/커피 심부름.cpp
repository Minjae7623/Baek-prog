#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    int latte = 0;

    for (const string& str : order)
    {
        if (str.find("latte") != string::npos) ++latte;
    }
    answer = (order.size() * 4500) + (latte * 500);

    return answer;
}