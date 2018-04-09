#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void main() {
	vector<int> vec;
	int num;

	while (cin >> num) {
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end(), greater<int>());

	printf("\nordered array\n");

	for (auto it :vec) {
		cout << it << " " ;
	}

}