/**
 * Author  : BurningTiles
 * Created : 2020-09-04 21:39:49
 * Link    : GitHub.com/BurningTiles
 * Program : For Loop
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	string num[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int a,b;
	cin >> a >> b;

	for (int i=a; i<=b; i++)
		if(i<10)
			cout << num[i] << "\n";
		else
			(i%2)? cout << "odd\n" : cout << "even\n";

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

**/