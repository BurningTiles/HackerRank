/**
 * Author  : BurningTiles
 * Created : 2020-11-22 17:57:18
 * Link    : BurningTiles.github.io
 * Program : Digit Frequency
**/

#include <stdio.h>

int main(){

	char s[1024];
	scanf("%s", s);
	int ans[10]={0};
	
	for(int i=0; s[i]!='\0'; i++)
		if(s[i]>='0' && s[i]<='9')
			++ans[s[i]-'0'];
	
	for(int i=0; i<10; i++)
		printf("%d ", ans[i]);

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

**/