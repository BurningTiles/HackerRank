/**
 * Author  : BurningTiles
 * Created : 2020-11-22 12:41:09
 * Link    : BurningTiles.github.io
 * Program : Functions in C
**/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
	return a>b ? a>c ? a>d ? a : d : c>d ? c : d : b>c ? b>d ? b : d : c>d ? c : d;
}

int main(){

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", max_of_four(a, b, c, d));

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/functions-in-c/problem

**/