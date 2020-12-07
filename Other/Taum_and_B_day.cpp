/**
 * Author  : BurningTiles
 * Created : 2020-12-05 23:22:22
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

	int tt;
	cin >> tt;
	while(tt--){
		ll b, w, bc, wc, z, ans;
		cin >> b >> w >> bc >> wc >> z;
		ans = abs(bc-wc)<=z ? b*bc + w*wc : bc>wc ? b*(wc+z) + w*wc : b*bc + w*(bc+z);
		cout << ans << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/taum-and-bday/problem

**/