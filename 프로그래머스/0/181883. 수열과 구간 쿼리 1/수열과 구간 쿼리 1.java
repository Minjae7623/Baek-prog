class Solution {
    public int[] solution(int[] arr, int[][] queries) {
        int[] answer = arr;

        for (int query[] : queries) {
            int s = query[0], e = query[1];

            for (int i = s; i <= e; i++)
                answer[i]++;
        }

        return answer;
    }
}