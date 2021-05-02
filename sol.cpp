#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int m, s;
		cin >> m >> s;
		// divide the total minutes to reach the parking
		// by the total minutes of the single song 
		cout << m / s << '\n';
	}
	return 0;
}
