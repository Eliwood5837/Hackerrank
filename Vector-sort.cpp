#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;
	//n = size
	vector<int> vec;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		vec.push_back(b);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}
	return 0;
}
