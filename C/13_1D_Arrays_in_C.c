/**
 * Author  : BurningTiles
 * Created : 2020-11-22 17:32:38
 * Link    : BurningTiles.github.io
 * Program : 1D Arrays in C
**/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, ans=0;
	scanf("%d ", &n);
	int *arr = (int*) malloc(n*sizeof(int));

	for(int i=0; i<n; i++){
		scanf("%d ", arr+i);
		ans += arr[i];
	}

	printf("%d", ans);
	free(arr);

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/1d-arrays-in-c/problem

**/