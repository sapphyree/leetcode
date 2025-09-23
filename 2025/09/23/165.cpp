#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

// TODO: - Add support for equalising zeroes (i.e if version1 is 3.3 and version2 is 3.3.1, it fails rn but should return -1)
// 	 - Check a variety of random edgecases
// 	 - Maybe think of a pointer based solution instead of iterating over the vector?


class Solution {
	public:
		int compareVersion(string version1, string version2) {
			// split the versions, traverse the vectors with the same iterator and compare version values
			vector<string> version1SplitVector = split(version1, '.');
			vector<string> version2SplitVector = split(version2, '.');

			for (int i = 0; i < version1SplitVector.size(); i++ ) {
				if (stoi(version1SplitVector.at(i)) < stoi(version2SplitVector.at(i))) {
					return -1;
				}
				if (stoi(version1SplitVector.at(i)) > stoi(version2SplitVector.at(i))) {
					return 1;
				}
			}
			return 0;

		}
		
		// String splitting function shamelessly copied
		vector<string> split(const string &s, char delim) {
			vector<string> result;
			stringstream stringStream(s);
			string item;

			while(getline(stringStream, item, delim)) {
				result.push_back(item);
			}

			return result;
		}
};


int main() {
	Solution sol;
	string example1, example2;
	example1 = "1.01";
	example2 = "1.0001.2";

	//vector<string> v = split(example1, '.');
	//for (auto i : v) cout << i << endl;

	int i = sol.compareVersion(example1, example2);
	cout << i << endl;

	return 0;
}
