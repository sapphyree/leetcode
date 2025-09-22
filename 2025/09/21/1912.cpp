#include <vector>

using std::vector;

class MovieRentingSystem {
	public:
		MovieRentingSystem(int n, vector<vector<int>> &entries) {

			// Maintain an ordered set?
			// Shop can contain at most one copy of a movie => maintain an array of pointers to a hashset whose key
			// is the movie and value is the price?
			//
		vector<vector<int>> arrayOfShops[]

		}

		vector<int> search(int movie) {
		}

		void rent(int shop, int movie) {
		}

		void drop(int shop, int movie) {
		}

		vector<vector<int>> report() {
		}

		/**
 		 * Your MovieRentingSystem object will be instantiated and called as such:
 		 * MovieRentingSystem* obj = new MovieRentingSystem(n, entries);
 		 * vector<int> param_1 = obj->search(movie);
 		 * obj->rent(shop,movie);
 		 * obj->drop(shop,movie);
 		 * vector<vector<int>> param_4 = obj->report();
 		 */
}

int main() {

	vector<vector<int>> entries = {{0,1,5},{0,2,6},{0,3,7},{1,1,4},{1,2,7},{2,1,5}};
	int n = 3;

	MovieRentingSystem* system = new MovieRentingSystem(n, entries);
	vector<int> param_1 = system->search(movie);
	system->rent(shop, movie);
	system->drop(shop, movie);
	vector<vector<int>> param_4 = system->report();

}

