class Solution {
    public int[] solution(int[] arr) {
        int[] answer;
        int size = 0;
        int k = 0;

        for (int num : arr)
            size += num;

        answer = new int[size];

        for (int value : arr) {
            for (int j = 0; j < value; j++) {
                answer[k++] = value;
            }
        }

        return answer;
    }
}