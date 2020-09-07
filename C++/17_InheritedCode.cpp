/**
 * Author  : BurningTiles
 * Created : 2020-09-07 11:12:53
 * Link    : GitHub.com/BurningTiles
 * Program : Inherited Code
**/

#include <bits/stdc++.h>
using namespace std;

class BadLengthException{
	int len;
	public:
		BadLengthException(int n):len(n){}
		int what(){
			return len;
		}
};

bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/inherited-code/problem

**/