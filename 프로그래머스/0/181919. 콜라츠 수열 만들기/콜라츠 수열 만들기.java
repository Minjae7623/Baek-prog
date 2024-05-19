import java.util.ArrayList;

class Solution {
    public int[] solution(int n) {
        ArrayList<Integer> list = new ArrayList<>(1);
        int[] answer = {};
        list.add(n);

        while (n > 1) {
            n = (n % 2) == 0 ? n / 2 : 3 * n + 1;
            list.add(n);
        }
        return answer = list.stream().mapToInt(i -> i).toArray();
    }
}