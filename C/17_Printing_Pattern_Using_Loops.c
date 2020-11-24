/**
 * Author  : BurningTiles
 * Created : 2020-11-22 16:48:54
 * Link    : BurningTiles.github.io
 * Program : Printing Pattern Using Loops
**/

#include <stdio.h>

int main(){

	int n;
	scanf("%d", &n);
	int n2 = n*2;
	
	for(int it=1; it<n2; it++) {
		int i = it<n ? it : n2-it;
		
		for(int j=n; j>n-i; j--)
			printf("%d ", j);
		for(int j=1; j<(n-i)*2; j++)
			printf("%d ", n-i+1);
		for(int j=n-i+1; j<=n; j++)
			if(j!=1) 
				printf("%d ", j);

		printf("\n");
	}

	return 0;
}

/**

Question : 
hackerrank.com/challenges/printing-pattern-2/problem

**/