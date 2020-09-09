/**
 * Author  : BurningTiles
 * Created : 2020-09-09 23:33:31
 * Link    : GitHub.com/BurningTiles
 * Program : Maps STL
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	map<string,int> m;
	map<string,int>::iterator it;
	int q, a;
	string name;
	cin >> q;
	while(q--){
		cin >> a;
		switch(a){
			case 1:
				cin >> name >> a;
				m[name] += a;
				break;
			case 2:
				cin >> name;
				m.erase(name);
				break;
			case 3:
				cin >> name;
				it = m.find(name);
				(it==m.end())? cout << "0\n" : cout << it->second << "\n";
				break;
		}
	}
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/cpp-maps/problem

**/