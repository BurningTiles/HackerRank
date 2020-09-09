/**
 * Author  : BurningTiles
 * Created : 2020-09-09 22:27:24
 * Link    : GitHub.com/BurningTiles
 * Program : Vector Sort
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> A(n); for(auto &a:A) cin >> a;
	sort(A.begin(),A.end());
	for(auto &a:A) cout << a << ' ';
	return 0;
}

/**

Question :
https://www.hackerrank.com/challenges/vector-sort/problem

**/