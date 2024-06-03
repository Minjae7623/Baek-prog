class Solution {
    public static String[] solution(String[] names) {
        int length = names.length % 5 == 0 ? names.length / 5 : names.length / 5 + 1;
        String[] answer = new String[length];

        for (int i = 0, j = 0; i < names.length; i += 5)
            answer[j++] = names[i];

        return answer;
    }
}