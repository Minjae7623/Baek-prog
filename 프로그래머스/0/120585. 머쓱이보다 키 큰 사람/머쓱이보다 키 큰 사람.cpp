#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = count_if(array.begin(), array.end(), [height](int a) {return a > height; });
    return answer;
}