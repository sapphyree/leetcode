#include <vector>
#include <map>
#include <iostream>

using std::vector;
using std::map;
using std::pair;

class Solution {
public:
	int maxFrequencyElements(vector<int> &nums) {
		map<int, int> map;

		for (int i = 0; i < nums.size(); i++) {
			if (map.count(nums[i]) == 0) {
				map.insert(pair<int, int>(nums[i], 1));
			}
			else {
				map[nums[i]]++;
			}
		}

		int maxFrequency = 0;
		int count = 0;

		for (auto i = map.begin(); i != map.end(); ++i) {
			std::cout << i->first << "=>" << i->second << "\n" << std::endl;
			if (i->second > maxFrequency) {
				maxFrequency = i->second;
				count = 0 + i->second;
			}
			else if (i->second == maxFrequency){
				count += i->second;
			}
			std::cout << "Max Frequency: " << maxFrequency << "\n" << std::endl;
			std::cout << "Count: " << count << "\n" << std::endl;	
		}

		std::cout << "Max Frequency: " << maxFrequency << "\n" << std::endl;
		std::cout << "Count: " << count << "\n" << std::endl;
		

		return count;
	}

};


