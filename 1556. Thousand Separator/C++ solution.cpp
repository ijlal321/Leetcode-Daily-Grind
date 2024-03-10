class Solution {
public:
	string thousandSeparator(int n) {
		string nums = to_string(n);
		string result;
		int count = 0;
		int i = nums.size()-1;

		while (i>=0){
			result = nums[i] + result;
			count += 1;

			if (count == 3 && i != 0){
				count = 0;
				result = "." + result;
			}
			i--;
		}
		return result;
	}
};