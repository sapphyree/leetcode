#include <vector>
#include <cstdlib>
#include <iostream>


using namespace std;

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        // shoelace's formula for calculating area of triangle from 3 vertices
	// 0.5 * | x_1 (y_2 - y_3) + x_2 (y_3 - y_1) + x_3 (y_1 - y_2)
	// naive solution: for i, j, k, iterate through, plug into shoelace and calculate area, then replace 
	// 		   currernt max value
		double maxArea = 0;
		int length = points.size();
		for (int i = 0; i < length - 2; i++) {
			vector<int> x = points[i];
			for (int j = i+1; j < length - 1; j++) {
				vector<int> y = points[j];
				for (int k = j+1; k < length; k++)
				{
					vector<int> z = points[k];
					double newArea = calculateArea(x,y,z);
					maxArea = (newArea > maxArea) ? newArea : maxArea; 
				}
			}
		}

		return maxArea;

    };

    double calculateArea(vector<int> &x, vector<int> &y, vector<int> &z) {
	    	double result = 0.5 * abs(x[0]*(y[1] - z[1]) + y[0]*(z[1] - x[1]) + z[0]*(x[1] - y[1]));
    		return result;
    };
};

int main() {

	Solution sol;

	vector<vector<int>> testCase1 = {{0,0},{0,1},{1,0},{0,2},{2,0}};
	vector<vector<int>> testCase2 = {{1,0},{0,0},{0,1}};
	

	cout << sol.largestTriangleArea(testCase1) << endl;
	cout << sol.largestTriangleArea(testCase2) << endl;
	return 0;
}
