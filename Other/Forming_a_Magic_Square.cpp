/**
 * Author  : BurningTiles
 * Created : 2020-12-04 21:40:15
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
	
	int magic[8][9] = {
		{8,1,6,3,5,7,4,9,2},
		{4,3,8,9,5,1,2,7,6},
		{2,9,4,7,5,3,6,1,8},
		{6,7,2,1,5,9,8,3,4},
		{6,1,8,7,5,3,2,9,4},
		{8,3,4,1,5,9,6,7,2},
		{4,9,2,3,5,7,8,1,6},
		{2,7,6,9,5,1,4,3,8}
	};

	int x[9], ans=1e9, tmp;
	for(int i=0; i<9; i++)
		cin >> x[i];
		
	for(int i=0; i<8; i++){
		tmp = 0;
		for(int j=0; j<9; j++)
			tmp += abs(x[j]-magic[i][j]);
		if(tmp<ans) ans = tmp;
	}

	cout << ans;

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/magic-square-forming/problem

**/