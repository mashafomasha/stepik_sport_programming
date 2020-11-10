#include <iostream>
#include <vector>
#include "./out.h"

using namespace std;

namespace brute_force_2 {
	int n;
	vector<int> a;
	vector<int> used;

	void rec(int idx) {
		if (idx > n) {
			out(a);
			return;
		}

		for (int i = 1; i <= n; ++i) {
			if (used[i] == 1) {
				continue;
			}

			a[idx] = i;

			used[i] = 1;
			rec(idx + 1);
			used[i] = 0;
		}
	}

	void brute() {
		cin >> n;

		a.assign(n + 1, 0);
		used.assign(n + 1, 0);

		rec(1);
	}

}
