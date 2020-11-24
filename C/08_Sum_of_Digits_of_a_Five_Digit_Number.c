/**
 * Author  : BurningTiles
 * Created : 2020-11-22 13:56:28
 * Link    : BurningTiles.github.io
 * Program : Sum of Digits of a Five Digit Number
**/

#include <stdio.h>

int main(){

	int n, ans=0;
	scanf("%d", &n);
	while(n){
		ans += n%10;
		n/=10;
	}
	printf("%d", ans);

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

**/