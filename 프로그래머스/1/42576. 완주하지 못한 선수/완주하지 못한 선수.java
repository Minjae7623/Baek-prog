import java.util.HashMap;

class Solution {
	public static String solution(String[] participant, String[] completion) {
		HashMap<String, Integer> partiMap = new HashMap<>();

		int temp = 0;

		for (String s : completion) {
			if (partiMap.containsKey(s)) {
				temp = partiMap.get(s);
				partiMap.put(s, temp + 1);
			}
			else 
				partiMap.put(s, 1);
		}

		for (String s : participant) {
			if (partiMap.containsKey(s)) {
				temp = partiMap.get(s);
				partiMap.put(s, temp - 1);
			}
			if (partiMap.get(s) == null || partiMap.get(s) < 0) //듣보잡 이름 || 동명이인 처리
				return s;
		}

		String answer = "";
		return answer;
	}
}