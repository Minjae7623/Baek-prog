class Solution {
    public int[] solution(String myString) {
        String[] arr = myString.split("x");
        int[] answer = {};

        answer = myString.charAt(myString.length() - 1) == 'x' ? new int[arr.length + 1] : new int[arr.length];

        for (int i = 0; i < arr.length; i++)
            answer[i] = arr[i].length();

        return answer;
    }
}