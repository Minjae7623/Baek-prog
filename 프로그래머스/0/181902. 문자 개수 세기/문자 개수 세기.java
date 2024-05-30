class Solution {
    public static int[] solution(String my_string) {
        int[] answer = new int [52];

        for(int i =0 ; i < my_string.length(); i++){
            int j = 'a' > my_string.charAt(i) ? my_string.charAt(i) - 65 : my_string.charAt(i) - 71;
            
            answer[j]++;
        }

        return answer;
    }
}