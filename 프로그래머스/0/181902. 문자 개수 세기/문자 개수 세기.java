class Solution {
    public static int[] solution(String my_string) {
        int[] answer = new int [52];

        for(int i =0 ; i < my_string.length(); i++){
            int j = 0;
            if(65 <= my_string.charAt(i) - 0 && my_string.charAt(i) - 0 <= 90)
                j = my_string.charAt(i) - 65;
            else
                j = my_string.charAt(i) - 71;
            
            answer[j] += 1;
        }

        return answer;
    }
}