/**
 * Author  : BurningTiles
 * Created : 2020-12-04 22:12:54
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
	
	ll n, min;
	cin >> n;
	vector<ll> a(n);
	for(auto &x:a) cin >> x;
	cin >> min;

	if(n<2){
		cout << "0";
		return 0;
	}
	else if(n==1){
		abs(a[0]-a[1])>=min ? cout << "1" : cout << "0";
		return 0;
	}

	sort(a.begin(), a.end());
	ll ans = 0, i=0, j=n/2, k;
	while(j<n && a[j]-a[i]<min) ++j;
	k = j;
	for(; j<n && i<k;){
		if(a[j]-a[i]>=min){
			++ans;
			++i;
			++j;
		} else ++j;
	}

	cout << ans;
	
	return 0;
}

/**

Question : 
https://www.hackerrank.com/test/6ln9g5g0r6f/questions/gecd1tbf9gd

**/