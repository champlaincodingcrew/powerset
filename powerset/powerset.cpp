#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> a = { 1,2,3, 4 };

	vector<vector<int>> ps;

	for (int i = 0; i < pow(2, a.size()); i++) {
		vector<int> tempVec;

		for (int j = 0; j < a.size(); j++) {
			if ((1 << j & i) > 0) {
				tempVec.push_back(a[j]);
			}
		}

		ps.push_back(tempVec);
	}


	// Prints out the power set
	for (int i = 0; i < ps.size(); i++) {
		cout << "[";
		for (int j = 0; j < ps[i].size(); j++) {
			cout << ps[i][j] << " ";
		}
		cout << "]";
	}

	system("PAUSE");
	return 0;
}
