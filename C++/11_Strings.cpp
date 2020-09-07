/**
 * Author  : BurningTiles
 * Created : 2020-09-07 06:49:38
 * Link    : GitHub.com/BurningTiles
 * Program : Strings
**/

#include <bits/stdc++.h>
using namespace std;

int main(){

	string str1, str2;
	cin >> str1 >> str2;
	cout << str1.size() << " " << str2.size() << "\n";
	cout << str1 << str2 << "\n";
	cout << str2[0] << str1.substr(1) << " " << str1[0] << str2.substr(1);

	return 0;
}

/**

Questions : 
https://www.hackerrank.com/challenges/c-tutorial-strings/problem

**/