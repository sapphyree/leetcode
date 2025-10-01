#include <iostream>

using namespace std;

class Solution {
public:
    	int numWaterBottles(int numBottles, int numExchange) {
		
		int consumedWaterBottles = 0;
		int emptyBottles = 0;
		int totalBottles = numBottles + emptyBottles;

		while (totalBottles >= numExchange) {
			// drink
			consumedWaterBottles += numBottles;
			emptyBottles += numBottles;
			numBottles = 0;
			
			// exchange
			numBottles = emptyBottles / numExchange;
			emptyBottles = emptyBottles % numExchange;
			totalBottles = numBottles + emptyBottles;
		}

		if (totalBottles > 0) {
			consumedWaterBottles += numBottles;
		}

		return consumedWaterBottles;
    	}
};

int main() {

	Solution sol;

	cout << sol.numWaterBottles(15, 4) << endl;

	return 0;
}
