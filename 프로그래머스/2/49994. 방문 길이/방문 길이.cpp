#include <string>
#include <set>
using namespace std;

int solution(string dirs) {  
    int answer = 0;
    int x = 0, y = 0;
    //못풀어서 찾아봄
    set<pair<pair<int, int>, pair<int, int>>> path;

    for (auto dir : dirs)
    {
        int nx = x, ny = y;

        if ('U' == dir)  --ny;
        else if ('D' == dir) ++ny;
        else if ('L' == dir) --nx;
        else if ('R' == dir) ++nx;

        if (nx < -5 || nx > 5 || ny < -5 || ny > 5) continue;

        if (path.find({ {x,y} ,{nx,ny} }) == path.end() &&
            path.find({ {nx,ny} ,{x,y} }) == path.end())
        {
            path.insert({ {x,y}, {nx,ny} });
            ++answer;
        }

        x = nx;
        y = ny;
    }

    return answer;
}