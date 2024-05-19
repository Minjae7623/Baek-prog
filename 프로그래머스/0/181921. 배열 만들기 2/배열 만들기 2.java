import java.util.ArrayList;

class Solution {
    public int[] solution(int l, int r) {
        int[] answer = {};
        ArrayList<Integer> list = new ArrayList<>();
        boolean chk = false;

        for (int i = l; i <= r; i++) {
            String s = String.valueOf(i);
            for (char c : s.toCharArray()) {
                if (c == '5' || c == '0')
                    chk = true;
                else
                    chk = false;
                if(!chk)
                    break;
            }
            if (chk) {
                list.add(Integer.parseInt(s));
                chk = false;
            }
        }

        if (list.isEmpty())
            list.add(-1);

        answer = list.stream().mapToInt(i -> i).toArray();

        return answer;
    }
}