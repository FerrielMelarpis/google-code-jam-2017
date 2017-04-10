#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		string s;
		int k;
		cin >> s >> k;

		bool possible = true;
		int slen = s.length();
		int flips = 0;
		for (int p = 0; p < slen; p++) {
			if (p > slen - k) {
				if (s[p] == '-') {
					possible = false;
					break;
				}

				continue;
			}

			if (s[p] == '-') {
				for (int q = 0; q < k; q++) {
					s[p + q] = "+-"[s[p + q] == '+'];
				}

				flips++;
			}
		}

		cout << "Case #" << i << ": ";

		if (possible) {
			cout << flips;
		} else {
			cout << "IMPOSSIBLE";
		}

		cout << endl;
	}


	return 0;
}
