import java.util.ArrayList;
import java.util.HashMap;
class Solution {
    public static String[] solution(String[] record) {
        ArrayList<String> ment = new ArrayList<>();
        HashMap<String, String> idMap = new HashMap<>();
        String[] answer;
        String[] keyward;
         for (String cmd : record) {            keyward = cmd.split(" ");
            if (keyward[0].equals("Enter") || keyward[0].equals("Change"))
                idMap.put(keyward[1], keyward[2]);
        }
        for (String cmd : record) {
            keyward = cmd.split(" ");
            if (keyward[0].equals("Enter"))
                ment.add(idMap.get(keyward[1]) + "님이 들어왔습니다.");
            else if (keyward[0].equals("Leave"))
                ment.add(idMap.get(keyward[1]) + "님이 나갔습니다.");
        }
        answer = ment.toArray(new String[0]);
        return answer;
    }
}