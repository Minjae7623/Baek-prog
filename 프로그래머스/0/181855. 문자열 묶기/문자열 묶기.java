import java.util.HashMap;

class Solution {
    public int solution(String[] strArr) {
        int maxCount = 0;
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();

        for (String str : strArr) {
            map.put(str.length(), map.getOrDefault(str.length(), 0) + 1);
            maxCount = Math.max(maxCount, map.get(str.length()));
        }

        return maxCount;
    }
}