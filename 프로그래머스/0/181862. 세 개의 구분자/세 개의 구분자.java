class Solution {
    public String[] solution(String myStr) {
        String[] answer = myStr.replaceAll("[abc]", " ")
                .trim()
                .split("\\s+");

        return answer[0].isEmpty() ? new String[]{"EMPTY"} : answer;
    }
}