import java.util.ArrayDeque;

public class Solution {
	public static String solution(String[] cards1, String[] cards2, String[] goal) {
		ArrayDeque<String> queGoal = new ArrayDeque<String>();
		ArrayDeque<String> queC1 = new ArrayDeque<String>();
		ArrayDeque<String> queC2 = new ArrayDeque<String>();

		for (int i = 0; i < goal.length; i++) {
			queGoal.addLast(goal[i]);

			if (i < cards1.length)
				queC1.addLast(cards1[i]);
			if (i < cards2.length)
				queC2.addLast(cards2[i]);
		}

		for (int i = 0; i < goal.length; i++) {
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