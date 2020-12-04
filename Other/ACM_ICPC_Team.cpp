/**
 * Author  : BurningTiles
 * Created : 2020-12-04 21:52:44
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
using namespace std;

int topics(string a, string b, int n) {
	int ans = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == '1' || b[i] == '1')
			++ans;
	return ans;
}

int main() {
	if (ifstream("input.txt")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, max = 0, team = 0, tmp;
	cin >> n >> m;
	string s[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			tmp = topics(s[i], s[j], m);
			if(tmp>max){
				max = tmp;
				team = 1;
			}
			else if(tmp==max)
				++team;
		}
	}

	cout << max << endl << team;

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/acm-icpc-team/problem

**/