/**
 * Author  : BurningTiles
 * Created : 2020-09-07 14:20:13
 * Link    : GitHub.com/BurningTiles
 * Program : Count Tripletes
**/

#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long k) {
	long ans = 0;
	map<long,long> l,r;
	for(unsigned long int i=0; i<arr.size(); i++)
		r[arr[i]]++;
	for(unsigned long int i=0; i<arr.size(); i++){
		r[arr[i]]--;
		if(arr[i]%k == 0)
			ans += l[arr[i]/k] * r[arr[i]*k];
		l[arr[i]]++;
	}
	return ans;
}
map<ll,ll> l,r;
int main() {
	ll n, k, ans=0;
	cin >> n >> k;
	ll a[n];
	
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++)
		r[a[i]]++;
	for(int i=0; i<n; i++){
		r[a[i]]--;
		if(a[i]%k == 0)
			ans += l[a[i]/k] * r[a[i]*k];
		l[a[i]]++;
	}
	cout << ans;
	
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/count-triplets-1/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

**/