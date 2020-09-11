/**
 * Author  : BurningTiles
 * Created : 2020-09-11 20:34:51
 * Link    : GitHub.com/BurningTiles
 * Program : Dequeue STL
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int tt;
	cin >> tt;
	while(tt--){
		int n,k;
		cin >> n >> k;
		vector<int> ar(n); for(auto &a:ar) cin >> a;
		int max = -1;
		for(int i=0; i<n-k+1; i++){
			if(max<i){
				max = i;
				for(int j=i; j<i+k; j++)
					if(ar[max]<ar[j])
						max = j;
			}
			else if(ar[max]<ar[i+k-1])
				max = i+k-1;
			cout << ar[max] << " ";
		}
		cout << "\n";
	}
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/deque-stl/problem

**/