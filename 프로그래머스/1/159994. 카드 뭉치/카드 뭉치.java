import java.util.ArrayDeque;
import java.util.Arrays;

public class Solution {
	public static String solution(String[] cards1, String[] cards2, String[] goal) {
		ArrayDeque<String> queGoal = new ArrayDeque<String>(Arrays.asList(goal));
		ArrayDeque<String> queC1 = new ArrayDeque<String>(Arrays.asList(cards1));
		ArrayDeque<String> queC2 = new ArrayDeque<String>(Arrays.asList(cards2));

		while (!queGoal.isEmpty()) {
			if ((!queC1.isEmpty() && queC1.peekFirst().equals(queGoal.peekFirst()))) {
				queC1.pollFirst();
				queGoal.pollFirst();
			} else if (!queC2.isEmpty() && queC2.peekFirst().equals(queGoal.peekFirst())) {
				queC2.pollFirst();
				queGoal.pollFirst();
			} else
				return "No";
		}

		if (queGoal.isEmpty())
			return "Yes";

		return "No";
	}
}