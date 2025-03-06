#include <string>
#include <vector>
#include <deque>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    deque <string> deque1(cards1.begin(), cards1.end());
    deque <string> deque2(cards2.begin(), cards2.end());

    string answer = "Yes";
    
    for (string str : goal)
    {
        if (deque1.front() == str) {
            deque1.pop_front();
        }
        else if (deque2.front() == str) {
            deque2.pop_front();
        }
        else {
            return "No";
        }
    }

    return answer;
}