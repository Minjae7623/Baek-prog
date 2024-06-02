import java.util.Arrays;

class Solution {
    public String[] solution(String[] str_list) {
        int i = 0;

        for (String s : str_list) {
            if (s.equals("l"))
                return Arrays.copyOfRange(str_list, 0, i);
            else if (s.equals("r"))
                return Arrays.copyOfRange(str_list, i + 1, str_list.length);
            i++;
        }

        return new String[0];
    }
}