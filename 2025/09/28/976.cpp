#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
	int largestPerimeter(vector<int> &nums) {
		/* base case: if there are only 3 elements, just calculate the area and if >0 return sum */
	    	int perimeter = 0;
	    	int length = nums.size();
	    	
		// NOTE: You don't need to check the area at all. Any area-related code was code I was using prior to getting a Time Limit Exceeded fault on a correct solution
		// This is entirely because checking area is an unnecessary step. Any valid triangle (whose sides are greater than 0) must have a non-zero area.
		// Shock horror, the question is poorly worded again. How fun!
		/*if (length == 3) {
			return (calculateAreaOfTriangle(nums[0], nums[1], nums[2])) > 0 ? (nums[0] + nums[1] + nums[2]) : 0;
	    	}*/
	
		// naive solution: iterate from n-2, n-1, n and n like in problem 09/27a
		// better soltuion? use triangle equality (a + b > c) to figure out which sides are possible

		// sort vector to get descending order
		sort(nums.begin(), nums.end(), greater<int>());

		// loop over vector i = 2
		for (int i = 2; i < nums.size(); i++) {
			int left = 0;
			int right = i - 1;

			while (left < right) {
				// Initially set to left + right > i; but we want to see that b + c > a, not a + b > c, as we hold the condition c < b < a already due to the descending sort
				if (nums[right] +  nums[i] > nums[left]) {
					/*double area = calculateAreaOfTriangle(nums[left], nums[right], nums[i]);
					//cout << area << endl;
					//cout << nums[left] << endl;
					if (area > 0) {
						int newPerimeter = nums[left] + nums[right] + nums[i];
						perimeter = (newPerimeter > perimeter) ? newPerimeter : perimeter;
					}*/
					int newPerimeter = nums[left] + nums[right] + nums[i];
					perimeter = (newPerimeter > perimeter) ? newPerimeter : perimeter;
					right--;
				}
				else {
					left++;
				}
			}

			//cout << "No valid triangles" << endl;
		}

	    	return perimeter;
    
    	};

	/*
    	double calculateAreaOfTriangle(int &a, int &b, int &c) {
		double s = 0.5 * (a + b + c);
		double internal = s * (s - a) * (s - b) * (s - c);
		return pow(internal, 0.5);
    	};
	*/
};

int main() {

	Solution sol;

	vector<int> testCase1 = {2,1,2};
	vector<int> testCase2 = {1,2,1,10};
	vector<int> testCase3 = {6,3,2,3};
	cout << sol.largestPerimeter(testCase1) << endl;
	cout << sol.largestPerimeter(testCase2) << endl;
	cout << sol.largestPerimeter(testCase3) << endl;

	return 0;
}
