#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	//n =size;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		vec.push_back(b);
	}
	int d;
	cin >> d;
	//d=element to delete
	vec.erase(vec.begin() + d - 1);
	int x,y;
	cin >> x>>y;

	vec.erase(vec.begin() + x - 1, vec.begin()+y-1);
	cout << vec.size() << endl;
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	return 0;
}

/*
146289
14289
*/