class Solution {
    public static int[] solution(int[] arr, int[][] queries) {
        int[] answer = new int[queries.length];

        for (int s = 0; s < queries.length; s++) {
            int k = queries[s][2];
            int min = 1000001;

            for (int i = queries[s][0]; i <= queries[s][1]; i++) {
                if (k < arr[i] && arr[i] < min)
                    min = arr[i];
            }
            answer[s] = min == 1000001 ? -1 : min;
        }

        return answer;
    }
}