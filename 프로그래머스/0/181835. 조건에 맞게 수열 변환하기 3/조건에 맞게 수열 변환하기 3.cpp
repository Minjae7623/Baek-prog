#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer(arr.size());
    transform(arr.begin(), arr.end(), answer.begin(), [k](int num) {return (k & 1) ? num * k : num + k; });

    return answer;
}