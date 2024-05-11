class Solution {
	public static String solution(String my_string, String overwrite_string, int s) {
		char[] arr = my_string.toCharArray();

		for (int i = s; i < s + overwrite_string.length(); i++) {
			char c = overwrite_string.charAt(i - s);
			arr[i] = c;
		}

		String str = String.valueOf(arr);
		return str;
	}
}