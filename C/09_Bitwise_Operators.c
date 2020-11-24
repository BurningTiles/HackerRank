/**
 * Author  : BurningTiles
 * Created : 2020-11-22 15:51:15
 * Link    : BurningTiles.github.io
 * Program : Bitwise Operators
**/

#include <stdio.h>

int main(){

	int n, k, and=0, or=0, xor=0;
	scanf("%d %d", &n, &k);
	for(int i=1; i<=n; i++)
		for(int j=i+1; j<=n; j++){
			int a=i&j, o=i|j, x=i^j;
			if(a>and && a<k) and = a;
			if(o>or  && o<k) or  = o;
			if(x>xor && x<k) xor = x;
		}
	
	printf("%d\n%d\n%d", and, or, xor);

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

**/