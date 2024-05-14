class Solution {
    public int solution(int a, int d, boolean[] included) {
        int j = a;
        int answer = 0;

        for(int i =0; i < included.length; i++){
            if(included[i])
                answer += j;
            j += d;
        }
        return answer;
    }
}