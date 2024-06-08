import java.util.Collections;
import java.util.HashMap;

class Solution {
    public static int solution(int[] array) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int count = 0;
        int answer = 0;

        if (array.length == 1)
            return array[0];

        else {
            for (int i : array)
                map.put(i, map.getOrDefault(i, 0) + 1);

            int max = Collections.max(map.values());

            for (int key : map.keySet()) {
                if (map.get(key) == max) {
                    count++;
                    answer = key;
                }
            }
            
            return count > 1 ? -1 : answer;
        }
    }
}