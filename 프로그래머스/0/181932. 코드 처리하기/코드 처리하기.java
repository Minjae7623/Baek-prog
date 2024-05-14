class Solution {
    public static String solution(String code) {
        int mode = 0;
        StringBuilder answer = new StringBuilder();

        for (int i = 0; i < code.length(); i++) {
            char c = code.charAt(i);

            if (c == '1')
                mode = (mode == 0) ? 1 : 0;

            else if (i % 2 == mode)
                answer.append(c);
        }
            return answer.toString().isEmpty() ? "EMPTY" : answer.toString(); 
    }
}