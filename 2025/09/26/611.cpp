#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    	int triangleNumber(vector<int>& nums) {
		int numberOfTriplets = 0;

		// sort the array to get numbers in ascending order
		sort(nums.begin(), nums.end());

		for (int i = 2; i < nums.size(); i++) {
			//cout << nums[i] << endl;
			int left = 0;
			int right = i - 1;

			// [2,2,3,4]
			// [2,3,4,4]
			//
			// left: 2, right: 4 

			// check the equality a + b > c
			while (left < right) {
				if (nums[left] + nums[right] > nums[i]) {
					numberOfTriplets += (right - left);
					right--;
				}
				else {
					left++;
				}
			}
				
		}


		return numberOfTriplets;
    	}
};

int main() {
	
	Solution sol;

	vector<int> testCase1 = {2,2,3,4};
	vector<int> testCase2 = {4,2,3,4};

	cout << sol.triangleNumber(testCase1) << endl;
	cout << sol.triangleNumber(testCase2) << endl;


	return 0;
}


