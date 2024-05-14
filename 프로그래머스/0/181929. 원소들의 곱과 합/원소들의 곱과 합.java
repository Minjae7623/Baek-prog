class Solution {
    public int solution(int[] num_list) {
        int multi = 1, sum = 0;

        for (int i : num_list) {
            multi *= i;
            sum += i;
        }
        return multi > Math.pow(sum, 2) ? 0 : 1;
    }
}