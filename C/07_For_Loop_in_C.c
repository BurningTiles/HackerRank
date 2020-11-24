/**
 * Author  : BurningTiles
 * Created : 2020-11-22 13:34:12
 * Link    : BurningTiles.github.io
 * Program : For Loop in C
**/

#include <stdio.h>

int main(){

	char num[][100]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i=a; i<=b; i++)
		if(i<10)
			printf("%s\n", num[i]);
		else if(i%2)
			printf("odd\n");
		else
			printf("even\n");
			
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/for-loop-in-c/problem

**/