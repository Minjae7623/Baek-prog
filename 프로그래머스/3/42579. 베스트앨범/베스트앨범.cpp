#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int> map;                //최대 재생 장르
    vector<pair<int, pair<string, int>>> bestSong; //재생 횟수, 장르, 인덱스
    
    for (int i = 0; i < genres.size(); ++i)
    {
        map[genres[i]] += plays[i];
        bestSong.push_back({ plays[i], {genres[i], i } });
    }

    vector<pair<string, int>> bestGenre(map.begin(), map.end());

    //장르 내에서 많이 재생된 노래 내림차순
    //재생 횟수가 같다면 고유번호 오름차순
    sort(bestGenre.begin(), bestGenre.end(), [](const auto& a, const auto& b) {return a.second > b.second; });
    sort(bestSong.begin(), bestSong.end(), [](const auto& a, const auto& b) {
        if (a.first == b.first) {
            a.second.second < b.second.second;
        }
        return a.first > b.first;
        }
    );
  
    //노래는 최대 2개
    for (int i = 0; i < bestGenre.size(); ++i)
    {
        const string& genre = bestGenre[i].first;
        int count = 0;
        for (const auto& song : bestSong)
        {
            if (genre == song.second.first)
            {
                answer.push_back(song.second.second);
                ++count;

                if (count == 2)
                    break;
            }
        }
    }

    return answer;
}