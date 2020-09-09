/**
 * Author  : BurningTiles
 * Created : 2020-09-09 23:05:47
 * Link    : GitHub.com/BurningTiles
 * Program : Lower Bound STL
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, num, tmp;
	cin >> n;
	vector<int> A(n); for(auto &a:A) cin >> a;
	cin >> n;
	while(n--){
		cin >> num;
		tmp = lower_bound(A.begin(),A.end(),num)-A.begin();
		(A[tmp]==num)? cout << "Yes " : cout << "No ";
		cout << tmp+1 << "\n";
	}
	return 0;
}

/**

Question :
https://www.hackerrank.com/challenges/cpp-lower-bound/problem

**/