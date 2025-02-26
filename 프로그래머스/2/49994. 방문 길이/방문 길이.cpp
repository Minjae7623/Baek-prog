#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(string dirs) {  
    int x = 5, y = 5;

    set<pair<pair <int, int>, pair<int, int>>> path;

    for (auto dir : dirs)
    {
        int nx = x, ny = y;
        switch (dir)
        {
        case 'U': { --ny; } break;
        case 'D': { ++ny; } break;
        case 'L': { --nx; } break;
        case 'R': { ++nx; } break;
        }

        if (ny < 0 || ny > 10 || nx < 0 || nx > 10) continue;

        path.insert({ {x, y}, {nx, ny} });
        path.insert({ {nx, ny}, {x, y} });

        x = nx, y = ny;
    }

    int answer = path.size() / 2;
    return answer;
}