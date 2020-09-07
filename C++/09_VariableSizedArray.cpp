/**
 * Author  : BurningTiles
 * Created : 2020-09-04 22:07:38
 * Link    : GitHub.com/BurningTiles
 * Program : Variable Sized Array
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q, len, x, y;
	cin >> n >> q;

	vector<vector <int>> nums(n);

	for(int i=0; i<n; i++){
		cin >> len;
		nums[i] = vector<int> (len);
		for (int j=0; j<len; j++)
			cin >> nums[i][j];
	}

	for(int i=0; i<q; i++){
		cin >> x >> y;
		cout << nums[x][y] << "\n";
	}
	
	return 0;
}

/**

Question :
https://www.hackerrank.com/challenges/variable-sized-arrays/problem

**/