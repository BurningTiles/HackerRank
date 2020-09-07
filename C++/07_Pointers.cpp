/**
 * Author  : BurningTiles
 * Created : 2020-09-04 21:59:13
 * Link    : GitHub.com/BurningTiles
 * Program : Pointers
**/

#include <bits/stdc++.h>
using namespace std;

void update (int *a, int *b){
	*a += *b;
	*b -= *a-*b;
	*b = (*b<0)? -*b : *b;
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
https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

**/