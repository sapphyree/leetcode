#include "./3005.h"
#include <vector>

using std::vector;


int main() {
	Solution sol;
	
	//vector<int> example1 = {1,2,2,3,1,4};
	//vector<int> example2 = {1,2,3,4,5};a
	//
	//

	vector<int> vector1 = {58, 12, 77, 23, 46, 91, 4, 66, 35, 89, 7, 99};

	vector<int> vector2 = {
    		93, 2, 16, 28, 14, 68, 31, 80, 41, 22, 6, 87, 53, 12, 48, 75, 59, 66,
    		7, 84, 32, 55, 61, 9, 34, 77, 25, 44, 90, 36, 85, 57, 73, 40, 1, 20,
    		70, 76, 17, 30, 3, 64, 38, 19, 29, 95, 13
	};

	vector<int> vector3 = {5, 11, 98, 62, 37};

	vector<int> vector4 = {
    		74, 45, 26, 79, 34, 33, 71, 96, 47, 40, 56, 20, 58, 11, 100, 82, 64,
    		13, 4, 30, 25, 93, 27, 31, 77, 8, 5, 53, 43, 19, 7, 97, 36, 66, 85,
    		84, 89, 2, 1, 90, 24, 42, 39, 78, 55, 10, 16, 6, 80, 63, 44, 83, 14,
    		38, 21, 67, 50, 61, 17, 99, 32, 70, 87, 28, 52, 92, 75, 46, 22, 60,
    		69, 15, 91, 48, 88, 86, 12, 9, 59, 23, 73, 95, 35, 68, 3, 94
	};

	vector<int> vector5 = {
    		18, 69, 40, 81, 96, 55, 6, 84, 16, 49, 31, 1,
    		25, 70, 21, 26, 90, 77, 12, 45, 10, 32, 57, 2
	};

	vector<int> vectorEmpty = {};

	vector<int> vectorTest = {10,12,11,9,6,19,11};

	sol.maxFrequencyElements(vectorTest);
	//sol.maxFrequencyElements(vector2);
	//sol.maxFrequencyElements(vector3);
	//sol.maxFrequencyElements(vector4);
	//sol.maxFrequencyElements(vector5);
	//sol.maxFrequencyElements(vectorEmpty);



	return 0;
}
