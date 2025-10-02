#include <iostream>

using namespace std;

class Solution {
public:
    	int maxBottlesDrunk(int numBottles, int numExchange) {
		
		int consumedWaterBottles = 0;
		int emptyBottles = 0;
		int totalBottles = numBottles + emptyBottles;

		while (totalBottles >= numExchange) {
			// drink
			//cout << "drink!" << endl;
			consumedWaterBottles += numBottles;
			emptyBottles += numBottles;
			numBottles = 0;
			

				//cout << "drank: " << consumedWaterBottles << endl;
				//cout << "filled: " << numBottles << endl;
				//cout << "empty: " << emptyBottles << endl;
				//cout << "total: " << totalBottles << endl;


			// exchange
			while (emptyBottles >= numExchange)
			{
				numBottles += (emptyBottles - numExchange) >= 0 ? 1 : 0;
				emptyBottles = emptyBottles - numExchange;
				totalBottles = numBottles + emptyBottles;
		
				numExchange++;
				
				cout << "drank: " << consumedWaterBottles << endl;
				cout << "filled: " << numBottles << endl;
				cout << "empty: " << emptyBottles << endl;
				cout << "total: " << totalBottles << endl;
				cout << "ex rate: " << numExchange << endl;
			}
		}

		if (totalBottles > 0) {
			consumedWaterBottles += numBottles;
		}

		return consumedWaterBottles;
    	}
};

int main() {

	Solution sol;

	cout << sol.maxBottlesDrunk(13, 6) << endl;

	return 0;
}
