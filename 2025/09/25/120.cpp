#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

class Solution {
public:
	int minimumTotalOld(vector<vector<int>> &triangle){
       		int sumOfMinimumPath = 0;
		int currentLevelIndex = 0;

		for (int i = 0; i < triangle.size(); i++) {	
			vector<int> currentLevel = triangle.at(i);
			
			// first element;
			if (currentLevel.size() == 1) {
				//cout << currentLevel.at(i) << endl;
				sumOfMinimumPath += currentLevel.at(i);
				//cout << "total: " << sumOfMinimumPath << endl;
			}

			// all other levels
			if (currentLevel.size() != 1) {
				if (currentLevel.at(currentLevelIndex) < currentLevel.at(currentLevelIndex + 1)) {
				//	cout << currentLevel.at(i) << endl;
					sumOfMinimumPath += currentLevel.at(currentLevelIndex);
					
				}
				else if (currentLevel.at(currentLevelIndex) > currentLevel.at(currentLevelIndex + 1)) {
				//	cout << currentLevel.at(i + 1) << endl;
					sumOfMinimumPath += currentLevel.at(currentLevelIndex + 1);
					currentLevelIndex += 1;
					//cout << "total: " << sumOf
				}
				else {
					sumOfMinimumPath += currentLevel.at(currentLevelIndex);
				}

			}
		}	
		
		return sumOfMinimumPath;
	}
	// walk backwards up the path
	int minimumTotal(vector<vector<int>> &triangle){
       		int sumOfMinimumPath = 0;
		
		// loop through both i,j, starting i at bottom of list and going up
		for (int i= triangle.size() - 2; i >= 0; i--) {
			for (int j = 0; j < triangle[i].size(); j++) {
				// set current element to the minimum of the two boxes below (i.e i+1, j, i+1, j+1)
				triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
				cout << triangle[i][j] << endl;
			}

			
		}

		sumOfMinimumPath = triangle[0][0];

		return sumOfMinimumPath;
	}
};

int main() {

	Solution sol;
	int result;

	vector<vector<int>> testCase1 = {{2}, {3,4}, {6,5,7}, {4,1,8,3}};
	vector<vector<int>> testCase2 = {{-10}};
	vector<vector<int>> testCase3 = {{0}};
	vector<vector<int>> testCase4 = {{0}, {0,0}};
	vector<vector<int>> testCase5 = {{2}, {-3,4}, {100, 99, 7}, {4,1,-8,3}};
	vector<vector<int>> testCase6 = {{3},{3,3},{3,3,3},{3,3,3,3},{3,3,3,3,3},{3,3,3,3,0,3}};

	//sol.minimumTotal(testCase5);

	cout << sol.minimumTotal(testCase1) << endl;
	cout << sol.minimumTotal(testCase2) << endl;
	cout << sol.minimumTotal(testCase3) << endl;
	cout << sol.minimumTotal(testCase4) << endl;
	cout << sol.minimumTotal(testCase5) << endl;
	cout << sol.minimumTotal(testCase6) << endl;
	return 0;
}

