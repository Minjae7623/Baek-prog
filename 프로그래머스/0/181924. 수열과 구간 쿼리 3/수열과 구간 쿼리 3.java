class Solution {
    public static int[] solution(int[] arr, int[][] queries) {
        int tmp = 0;
        for (int i = 0; i < queries.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if (j == queries[i][0]){
                    tmp = arr[j];
                    arr[j] = arr[queries[i][1]];
                }
                if (j == queries[i][1])
                    arr[j] = tmp;
            }
        }
        return arr;
    }
}