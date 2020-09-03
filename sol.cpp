#include <bits/stdc++.h>

using namespace std;

const int nax = 65000;
char a[nax];

void test_case() {
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		if((a[i] - '0') % 2 == 0) cnt += (i + 1);
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for (int nr = 1; nr <= T; ++nr) {
		//test_case();
	//}
	test_case();
	return 0;
}
