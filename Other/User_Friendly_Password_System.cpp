/**
 * Author  : BurningTiles
 * Created : 2020-12-04 22:55:28
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
#define M 1000000007
using namespace std;

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	/* ios::sync_with_stdio(0);
	cin.tie(0); */
	
	ll q, auth, col;
	cin >> q >> col;

	string s, pass;
	ll hash1, hash2;
	

	while(q--){
		cin >> s;
		if(s[0]=='s'){
			cin >> pass;
			ll p=1, n=pass.size()-1; 
			hash1 = 0;
			for(int i=n; i>=0; i--){
				hash1 += (pass[i]*p) % M;
				p *= 131;
				p %= M;
				hash1 %= M;
			}
			hash2 = (hash1*131)%M;
		}
		else {
			cin >> auth;
			bool flag = false;
			if (hash1 == auth)
				flag = true;
			else if(auth>=hash2+48 && auth<=hash2+57)
				flag = true;
			else if(auth>=hash2+65 && auth<=hash2+90)
				flag = true;
			else if(auth>=hash2+97 && auth<=hash2+122)
				flag = true;

			flag ? cout << "1\n" : cout << "0\n";
		}
	}

	return 0;
}

/**

Question : 
https://www.hackerrank.com/test/6ln9g5g0r6f/questions/dff59sj2d6b

**/