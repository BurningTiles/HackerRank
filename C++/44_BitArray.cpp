/**
 * Author  : BurningTiles
 * Created : 2020-09-13 13:57:59
 * Link    : GitHub.com/BurningTiles
 * Program : Bit Array
**/

#include <bits/stdc++.h>
#define ll unsigned long long
#define M 2147483648
using namespace std;

int main() {
	ll n, s, p, q, a, b;
	cin >> n >> s >> p >> q;
	a = s - M * (s >> 31);
	ll count = 1;
	for(ll i = 1; i < n; ++i) {
		b = a*p+q;
		b = b - M * (b >> 31);
		if(a!= b)
			++count;
		a = b;
	}
	cout << count;
	return 0;
}

/**

Question :
https://www.hackerrank.com/challenges/bitset-1/problem

**/