/**
 * Author  : BurningTiles
 * Created : 2020-11-22 12:50:08
 * Link    : BurningTiles.github.io
 * Program : Pointers in C
**/

#include <stdio.h>

void update(int *a, int *b){
	int sum = *a + *b, diff = *a>*b ? *a-*b : *b-*a;
	*a = sum;
	*b = diff;
}

int main(){

	int a, b;
	int *pa = &a, *pb = &b;
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/pointer-in-c/problem

**/