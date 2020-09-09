/**
 * Author  : BurningTiles
 * Created : 2020-09-09 23:23:29
 * Link    : GitHub.com/BurningTiles
 * Program : Sets STL
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	set<int> s;
	int q, a, b;
	cin >> q;
	while(q--){
		cin >> a >> b;
		switch(a){
			case 1:
				s.insert(b);
				break;
			case 2:
				s.erase(b);
				break;
			case 3:
				(s.find(b)!=s.end())? cout << "Yes\n" : cout << "No\n";
				break;
		}
	}
	return 0;
}

/**

Question :
hackerrank.com/challenges/cpp-sets/problem

**/