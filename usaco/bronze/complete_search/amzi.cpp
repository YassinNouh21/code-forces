// O(NT)
#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);

	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	vector<int> b(1001);
	for (int i = 0; i != n; ++i) {
		cin >> v[i].first >> v[i].second;
		for (int j = v[i].first, last = v[i].second; j != last; ++j)
			++b[j];
	}
	
	int tot = 0;
	for (int i = 0; i != 1001; ++i)
		if (b[i])
			++tot;
	int m = 1001;
	for (int i = 0; i != n; ++i) {
		int tm = 0;
		for (int j = v[i].first, last = v[i].second; j != last; ++j) {
			if (b[j] - 1 <= 0)
				++tm;
		}
		m = min(m, tm);
	}
	cout << tot - m << endl;
}