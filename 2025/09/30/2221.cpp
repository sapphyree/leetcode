#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    	int triangularSum(vector<int>& nums) {
		int vectorLength = nums.size();
		int triangularSum = 0;

		/* Triangular Sum Process:
		 * (1) Check if length == 1, if so then end the process + return the value
		 * 	Otherwise, create a new vector of length n-1
		 * (2) Foreach i, 0 <= i < n-1, newNums[i] = (sum of i and i + 1) mod 10
		 * (3) Replace nums with newNums
		 * (4) Repeat
		 */

		// Below Solution is O(n^2) Time and O(N) space, but it proooobably can be reduced to O(N). An exercise for another day, perhaps?
		// NOTE: the reason a O(N^2) solution is fine here is because of the constraints, as the elements of nums are 0-9 and there are only
		// 	up to 1000 values in nums. If the constraints weren't so strict, this would be a far harder task!

		vector<int> newNums;

		while (vectorLength != 1) {
			for (int i = 0; i < vectorLength - 1; i++) {
				newNums.push_back(((nums[i] + nums[i + 1]) % 10));
			}
			//cout << newNums.size() << endl;
			nums = newNums;
			newNums.clear();
			//cout << newNums.size() << endl;
			vectorLength = nums.size();
		}

		return nums[0];
    	}
};

int main() {

	Solution sol;

	vector<int> testCase1 = {1,2,3,4,5};
	vector<int> testCase2 = {5};
	cout << sol.triangularSum(testCase1) << endl;
	cout << sol.triangularSum(testCase2) << endl;

	return 0;
}
