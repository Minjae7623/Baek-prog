import java.util.ArrayList;

class Solution {
    public static int[] solution(String[] intStrs, int k, int s, int l) {
        ArrayList<Integer> answer = new ArrayList<>();

        for (String str : intStrs) {
            int num = Integer.parseInt(str.substring(s, s + l));
            if (num > k)
                answer.add(num);
        }

        return answer.stream().mapToInt(a -> a).toArray();
    }
}