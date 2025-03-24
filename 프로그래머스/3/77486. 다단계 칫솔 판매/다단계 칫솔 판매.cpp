#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// 총수익: 칫솔 판매금(100) + 꼬봉 상납금
// 추천인에게 본인 총수익의 10% 상납

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    vector<int> answer(enroll.size(), 0);
    unordered_map<string, vector<pair<string, int>>> map; 
    unordered_map<string, vector<int>> sellMap;

    // 다단계 구조: map[자식] = {부모, 상납금 + 수익}
    for (int i = 0; i < enroll.size(); ++i)
    {
        if ("-" == referral[i])
            map[enroll[i]].push_back({ "center" , 0 });

        else
            map[enroll[i]].push_back({ referral[i], 0 });
    }
   
    //판매로 인한 수익금
    for (int i = 0; i < seller.size(); ++i)
    {
        //동일인의 수익을 각각 계산하기 위함
        sellMap[seller[i]].push_back(amount[i] * 100);
    }

    //상납금: 역으로 말단부터 계산
    for (int i = enroll.size() - 1; i >= 0; --i)
    {
        //칫솔 판매 수익
        auto vecIter = sellMap.find(enroll[i]);
        if (vecIter != sellMap.end())
        {


            for (auto it : vecIter->second)
            {
                int kickback = it * 0.1;

                if (kickback >= 1) //본인 수익금의 10% 차감
                {
                    it -= kickback;
                }

                string s = enroll[i];
                auto mapIter = map.find(s);
                mapIter->second.begin()->second += it;

                while (mapIter->second.begin()->first != "center") //부모가 center가 아니라면
                {
                    s = mapIter->second.begin()->first; //본인의 부모 찾기
                    mapIter = map.find(s);

                    mapIter->second.begin()->second += kickback;
                    kickback *= 0.1;

                    if (kickback < 1)
                        break;

                    mapIter->second.begin()->second -= kickback;
                }

            }
        }

        //확정된 수익금 저장
        answer[i] = map.find(enroll[i])->second.begin()->second;
    }

    return answer;
}