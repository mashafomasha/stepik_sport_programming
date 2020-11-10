#include <iostream>
#include <vector>
#include "./out.h"

using namespace std;

namespace brute_force_1 {
	vector<int> a;
	int n, m;

	void rec(int i) {
		if (i == n) {
			out(a);
			return;
		}

		for (int j = 1; j <= m; ++j) {
			a[i] = j;
			rec(i + 1);
		}
	}

	void brute() {
		cin >> n >> m;

		a.resize(n);

		rec(0);
	}
}
