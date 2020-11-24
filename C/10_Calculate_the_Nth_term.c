/**
 * Author  : BurningTiles
 * Created : 2020-11-22 15:59:19
 * Link    : BurningTiles.github.io
 * Program : Calculate the Nth term
**/

#include <stdio.h>

int find_nth_term(int n, int a, int b, int c){
	if(n==1) return a;
	if(n==2) return b;
	if(n==3) return c;
	return find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c);	
}

int main(){

	int n, a, b, c;
	scanf("%d %d %d %d", &n, &a, &b, &c);
	printf("%d", find_nth_term(n, a, b, c));

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/recursion-in-c/problem

**/