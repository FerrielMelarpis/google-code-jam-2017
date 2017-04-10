#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long u64;

u64 tidy(u64 n)
{
	u64 l = 1111111111111111111, t = 0;
	int c = 0;

	while (l) {
		while (c < 9 && t + l <= n) {
			c++;
			t += l;
		}

		l /= 10;
	}

	return t;
}

int main()
{
	int t;
	cin >> t;

	u64 n;
	for (int c = 1; c <= t; c++) {
		cin >> n;
		printf("Case #%d: %llu\n", c, tidy(n));
	}

	return 0;
}
