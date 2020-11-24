/**
 * Author  : BurningTiles
 * Created : 2020-11-22 17:52:39
 * Link    : BurningTiles.github.io
 * Program : Printing Tokens
**/

#include <stdio.h>

int main(){

	char s[1024];
	scanf("%[^\n]%*c", s);

	for(int i=0; s[i]!='\0'; i++)
		if(s[i]==' ')
			printf("\n");
		else
			printf("%c", s[i]);

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/printing-tokens-/problem

**/