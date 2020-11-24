/**
 * Author  : BurningTiles
 * Created : 2020-11-22 13:27:26
 * Link    : BurningTiles.github.io
 * Program : Conditional Statements in C
**/

#include <stdio.h>

int main(){

	char x[][10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int n;
	scanf("%d", &n);
	if(n>9)
		printf("Greater than 9");
	else 
		printf("%s", x[n]);

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/conditional-statements-in-c/problem

**/