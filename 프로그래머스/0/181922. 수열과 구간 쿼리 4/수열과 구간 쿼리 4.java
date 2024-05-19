class Solution {
    public static int[] solution(int[] arr, int[][] queries) {
        int[] answer = arr.clone();

        for (int[] query : queries) {
            int s = query[0], e = query[1], k = query[2];

            for (int i = s; i <= e; i++)
                answer[i] += i % k == 0 ? 1 : 0;
        }
        return answer;
    }
}