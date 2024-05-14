class Solution {
    public static String solution(String code) {
        int mode = 0;
        StringBuilder answer = new StringBuilder();

        for(int i = 0; i <code.length(); i++){
            char c = code.charAt(i);

            if(c == '1')
                mode = (mode == 0) ? 1 : 0;

            else if(mode == 0){ //문자인 경우
                if(i % 2 == 0)
                    answer.append(c);
            }
            else{
                if(i % 2 == 1)
                    answer.append(c);
            }
        }

        if(answer.toString().isEmpty())
            answer.append("EMPTY");

        return answer.toString();
    }
}