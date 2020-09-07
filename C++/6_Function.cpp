/**
 * Author  : BurningTiles
 * Created : 2020-09-04 21:52:26
 * Link    : GitHub.com/BurningTiles
 * Program : Function
**/

#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d){
	return (a>b)? (a>c)? (a>d)? a : d : (c>d)? c : d : (b>c)? (b>d)? b : d : (c>d)? c : d;
}

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/c-tutorial-functions/problem

**/