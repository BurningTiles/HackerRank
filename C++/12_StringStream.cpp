/**
 * Author  : BurningTiles
 * Created : 2020-09-07 06:55:40
 * Link    : GitHub.com/BurningTiles
 * Program : String Stream
**/

#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str){
	vector<int> nums;
	stringstream ss(str);
	int temp;
	char ch;
	while(ss >> temp){
		nums.push_back(temp);
		if(!(ss >> ch))
			break;
	}
	return nums;
}

int main(){
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for(int i = 0; i < integers.size(); i++)
		cout << integers[i] << "\n";

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

**/