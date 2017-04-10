#include <bits/stdc++.h>

using namespace std;


unsigned long long tidy(unsigned long long n)
{
	unsigned long long l = 1111111111111111111, t = 0;
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

	unsigned long long n;
	for (int c = 1; c <= t; c++) {
		cin >> n;
		printf("Case #%d: %llu\n", c, tidy(n));
	}

	return 0;
}
