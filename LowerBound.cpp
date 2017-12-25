#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int size;
	cin >> size;
	vector<int> vec;
	for (int i = 0; i < size; i++) {
		int in;
		cin >> in;
		vec.push_back(in);
	}
	int query;
	cin >> query;
	for (int i = 0; i < query; i++) {
		int queryc;
		cin >> queryc;
		vector<int>::iterator low;
		low = lower_bound(vec.begin(), vec.end(), queryc);
		if (vec[low - vec.begin()]==queryc) {
			cout << "Yes " << (low - vec.begin() + 1) << endl;
		}
		else {
			cout << "No " << (low - vec.begin() + 1) << endl;
		}
	}

	return 0;
}

bool checkin(int n, vector<int> b) {
	bool check = true;
	for (int i = 0; i < b.size(); i++) {
		if (n == b[i]) {
		
		}
		if (check == false) {
			return false;
		}
	}
}