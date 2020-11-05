#include <iostream>
#include <vector>

using namespace std;

vector<int> a;
int n, m;

int c = 0;
int t = 6659;

void out() {
	c += 1;
	if (c != t)
		return;

	for (auto e: a) {
		cout << e;
	}
	cout << endl;
}

void rec(int i) {
	if (i == n) {
		out();
		return;
	}

	for (int j = 1; j <= m; ++j) {
		a[i] = j;
		rec(i + 1);
	}
}

void brute () {
	cin >> n >> m;

	a.resize(n);

	rec(0);
}
