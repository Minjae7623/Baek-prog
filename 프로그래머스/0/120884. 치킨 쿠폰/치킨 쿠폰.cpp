#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer    = chicken / 10;
    int coupon    = chicken / 10;
    int remainder = chicken % 10;

    while (10 <= coupon + remainder)
    {
        answer    += (coupon + remainder) / 10;
        remainder  = (coupon + remainder) % 10; //교환하고 남은 쿠폰.
        coupon     = (coupon + remainder) / 10; //쿠폰으로 교환한 치킨의 쿠폰.
    }

    return answer;
}