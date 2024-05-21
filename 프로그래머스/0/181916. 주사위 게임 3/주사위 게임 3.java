import java.util.Collections;
import java.util.HashMap;

class Solution {
    public int solution(int a, int b, int c, int d) {
        HashMap <Integer, Integer> dice = new HashMap<>();
        int answer = 0;

        dice.put(a, dice.getOrDefault(a, 0) + 1);
        dice.put(b, dice.getOrDefault(b, 0) + 1);
        dice.put(c, dice.getOrDefault(c, 0) + 1);
        dice.put(d, dice.getOrDefault(d, 0) + 1);

        int [] arr = dice.entrySet().stream().sorted((o1, o2) -> Integer.compare(o2.getValue(), o1.getValue())).mapToInt(HashMap.Entry :: getKey).toArray();

        if(dice.size() == 1)
            answer = arr[0] * 1111;
        else if(dice.size() == 2){
            if(dice.get(arr[0]) == 3)
                answer = (10 * arr[0] + arr[1]) * (10 * arr[0] + arr[1]);
            else
                answer = (arr[0] + arr[1]) * Math.abs(arr[0] - arr[1]);
        }
        else if(dice.size() == 3)
            answer = arr[1] * arr[2];
        else
            answer = Collections.min(dice.keySet());

        return answer;
    }
}