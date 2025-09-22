#include <vector>
#include <map>
#include <iostream>

using std::vector;
using std::map;
using std::pair;

class Solution {
public:
	int maxFrequencyElements(vector<int> &nums) {
		// Hashset to store unique key:value pairs
		map<int, int> map;

		// Initalise variables for tracking the instances in the hashset.
		int maxFrequency = 0;
		int count = 0;

		// Iterate over nums vector and either:
		// (1) If the hashed element doesn't exist, insert it into the hashset and provide the starting value of 1 occurence
		// (2) Or simply increment the value at the hashed key by 1 occurence.
		for (int i = 0; i < nums.size(); i++) {
			if (map.count(nums[i]) == 0) {
				map.insert(pair<int, int>(nums[i], 1));
			}
			else {
				map[nums[i]]++;
			}
		}

		// Iterate through the hashset. If the value of the k:v pair is larger than the current value of maxFrequency,
		// set it to that value (i.e we have found a new highest maxFrequency) then set the new count of elements at
		// that maxFrequency to 0 + the value. Otherwise, add the count to the current if it's the same maxFrequency.
		for (auto i = map.begin(); i != map.end(); ++i) {
			if (i->second > maxFrequency) {
				maxFrequency = i->second;
				count = 0 + i->second;
			}
			else if (i->second == maxFrequency){
				count += i->second;
			}
		}

		// DEBUG checking
		std::cout << "Max Frequency: " << maxFrequency << "\n" << std::endl;
		std::cout << "Count: " << count << "\n" << std::endl;

		return count;
	}

};


