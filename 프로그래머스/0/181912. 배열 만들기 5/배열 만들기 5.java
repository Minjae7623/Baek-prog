import java.util.ArrayList;

class Solution {
    public static int[] solution(String[] intStrs, int k, int s, int l) {
        ArrayList<Integer> answerList = new ArrayList<>();
        int[] answer;

        for (String str : intStrs) {
            char[] c = str.toCharArray();
            StringBuilder sb = new StringBuilder(String.copyValueOf(c));

            int num = Integer.parseInt(sb.substring(s, s + l));

            if (num > k)
                answerList.add(num);
        }
        return answerList.stream().mapToInt(a -> a).toArray();
    }
}