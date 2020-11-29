/**
 * Author  : BurningTiles
 * Created : 2020-11-29 07:39:24
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
using namespace std;

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n=6, a[n][n], ans=-1e9;

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> a[i][j];

	for(int i=0; i<n-2; i++){
		for(int j=0; j<n-2; j++){
			int tmp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
			if(tmp>ans) ans = tmp;
		}
	}

	cout << ans;

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/2d-array/problem

**/