/**
 * Author  : BurningTiles
 * Created : 2020-09-04 22:02:45
 * Link    : GitHub.com/BurningTiles
 * Program : Array Introduction
**/

#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	if(n>0){
		int nums[n];
		for(int i=0;    i<n; i++)
			cin >> nums[i];
		for(int i=n-1; i>=0; i--)
			cout << nums[i] << " ";
	}

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/arrays-introduction/problem

**/