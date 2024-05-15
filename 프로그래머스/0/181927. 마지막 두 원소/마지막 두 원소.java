class Solution {
    public int[] solution(int[] num_list) {
        int[] answer = new int[num_list.length + 1];
        int end = num_list[num_list.length - 1];
        int val = num_list[num_list.length - 2];

        for (int i = 0; i < num_list.length; i++)
            answer[i] = num_list[i];

        answer[num_list.length] = end > val ? end - val : end * 2;
        return answer;
    }
}