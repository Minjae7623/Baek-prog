import java.util.ArrayList;

class Solution {
    public int[] solution(int l, int r) {
        int[] answer = {};
        ArrayList<Integer> list = new ArrayList<>();
        boolean chk = true;

        for (int i = l; i <= r; i++) {
            for (char c : String.valueOf(i).toCharArray()) {
                if (c != '5' && c != '0') {
                    chk = false;
                    break;
                } else
                    chk = true;
            }
            if (chk) {
                list.add(i);
            }
        }
        return answer = list.isEmpty() ? new int[]{-1} : list.stream().mapToInt(i -> i).toArray();
    }
}