class Solution {
    public static String solution(int q, int r, String code) {
        StringBuilder answer = new StringBuilder();

        for (int i = 0; i < code.length(); i++) {
            if (r == i % q)
                answer.append(code.charAt(i));
        }

        return answer.toString();
    }
}