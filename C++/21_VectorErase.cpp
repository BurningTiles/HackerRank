/**
 * Author  : BurningTiles
 * Created : 2020-09-09 22:38:36
 * Link    : GitHub.com/BurningTiles
 * Program : Vector Erase
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n;
	vector<int> A(n); for(auto &a:A) cin >> a;
	
	cin >> n; A.erase(A.begin()+n-1);
	
	cin >> m >> n; A.erase(A.begin()+m-1,A.begin()+n-1);

	cout << A.size() << "\n";
	for(auto &a:A) cout << a << ' ';

	return 0;
}

/**

Question :
https://www.hackerrank.com/challenges/vector-erase/problem

**/