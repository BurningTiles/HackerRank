/**
 * Author  : BurningTiles
 * Created : 2020-11-22 17:40:10
 * Link    : BurningTiles.github.io
 * Program : Array Reversal
**/

#include <stdio.h>

int main(){

	int n, tmp;
	scanf("%d ", &n);
	int arr[n];
	for(int i=0; i<n; i++)
		scanf("%d ", arr+i);
	
	for(int i=0; i<n/2; i++){
		tmp        = arr[n-i-1];
		arr[n-i-1] = arr[i];
		arr[i]     = tmp;
	}

	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/reverse-array-c/problem

**/